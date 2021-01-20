#include<exception>
#include<iostream>
using namespace std;
int main(){
    // throw exception();
    try{
        int x = 2;
        int y = 0;
        int z = x / y;
    }catch(const exception& e){
        cout << "#";
        cout << e.what() << endl;
    }
    return 0;
}