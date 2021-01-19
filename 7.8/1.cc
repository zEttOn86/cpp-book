#include<iostream>

class Copyable{
    public:
        Copyable(){} // デフォルトコンストラクタ
        Copyable(const Copyable& c); // コピーコンストラクタ
        Copyable& operator=(const Copyable& c){
            return *this;
        } // コピー代入演算子
};

int main(){
    Copyable c1;
    Copyable c2;

    c2 = c1;
    return 0;
}