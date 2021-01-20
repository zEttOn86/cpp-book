#include<iostream>
#include<bitset>
using namespace std;

class DestructorAndException{
    public:
        ~DestructorAndException(){
            cout << "~DestructorAndException() is called." << endl;
            // さらに例外を送出
            throw std::runtime_error("~DestructorAndException()");
        }
};

//こうした挙動にならないように、
// 一般にデストラクタからは例外を送出しないようにします。
int main(){
    
    try{
        DestructorAndException obj;
        throw runtime_error("main()");
    }catch(const exception& e){
        cout << e.what() << endl;
    }

    return 0;
}