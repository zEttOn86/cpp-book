#include<iostream>
// ビルドできず．．．
class Movable {
    public:
        Movable(){} //デフォルトコンストラクタ
        // Movable(Movable&& m); // ムーブコンストラクタ
        // Movable& operator=(Movable&& m);//ムーブ代入演算子
}; 

/*
ムーブ代入演算子を定義していないクラスでは 
コンパイラによって暗黙的にムーブ代入演算子が定義されます。
*/
int main(){
    Movable m1;
    Movable m2 = std::move(m1);
    Movable m3;
    m3 = std::move(m2);
    return 0;
}