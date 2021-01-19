#include<iostream>
using namespace std;

class Integer {
    public:
        //暗黙的な型変換で使用されないようにするには 変換コンストラクタに explicit をつけます。
        explicit Integer(int value) : value_(value) {}
    
        int Value() const {
            return value_;
        }

    private:
        int value_;
};

// 加算演算子の左辺が第1引数，右辺が第2引数として渡される．
Integer operator+(const Integer& lhs, const Integer& rhs){
    Integer tmp(lhs.Value() + rhs.Value());
    return tmp;
}

int main(){
    Integer a(2);
    Integer b(3);
    Integer c = a + b;
    cout << a.Value() << endl;
    cout << b.Value() << endl;
    cout << c.Value() << endl;
    return 0;
}