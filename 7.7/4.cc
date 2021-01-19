#include<iostream>
using namespace std;

class Integer {
    public:
        //暗黙的な型変換で使用されないようにするには 変換コンストラクタに explicit をつけます。
        explicit Integer(int value) : value_(value) {}
    
        int Value() const {
            return value_;
        }

        // 加算演算子の左辺のメンバ関数に対して，右辺が引数として渡される
        Integer operator+(const Integer& rhs) const {
            Integer tmp(Value() + rhs.Value()); // 左辺は自オブジェクトを使用する．
            return tmp;
        }
    private:
        int value_;
};

int main(){
    Integer a(2);
    Integer b(3);
    Integer c = a + b;
    cout << a.Value() << endl;
    cout << b.Value() << endl;
    cout << c.Value() << endl;
    return 0;
}