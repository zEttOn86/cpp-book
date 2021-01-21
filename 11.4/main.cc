#include <iostream>
#include <dlfcn.h>
using namespace std;

int main(){
    void* handle = dlopen("./libhoge.so", RTLD_NOW);
    if(handle == NULL){
        const char* const error_message = dlerror();
        cerr << error_message << endl;
        return 1;
    }

    void* const symbol_add = dlsym(handle, "_Z3Addii");
    {
        const char* const error_message = dlerror();
        if(error_message != NULL){
            cerr << error_message << endl;
            dlclose(handle);
            return 1;
        }
    }

    void* const symbol_sub = dlsym(handle, "_Z3Subii");
    {
        const char* const error_message = dlerror();
        if(error_message != NULL){
            cerr << error_message << endl;
            dlclose(handle);
            return 1;
        }
    }

    auto Add = reinterpret_cast<int(*)(int, int)>(symbol_add);
    auto Sub = reinterpret_cast<int(*)(int, int)>(symbol_sub);

    cout << Add(1,2) << endl;
    cout << Sub(3,4) << endl;

    dlclose(handle);
    return 0;

}

//名前マングリングを無効化することで
//コンパイラに依存せずにシンボル名を指定することができます。 
//名前マングリングを無効化するには宣言を extern "C" のブロック