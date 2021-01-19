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

class RealNumber {
    public:
        explicit RealNumber(double value) : value_(value) {}

        double Value() const {
            return value_;
        }

    private:
        double value_;
};

RealNumber operator+(const Integer& lhs, const RealNumber& rhs){
    RealNumber tmp(lhs.Value() + rhs.Value());
    return tmp;
}

RealNumber operator+(const RealNumber& lhs, const Integer& rhs){
    RealNumber tmp(lhs.Value() + rhs.Value());
    return tmp;
}

int main(){
    Integer a(2);
    RealNumber b(3.3);
    RealNumber c = a + b;
    cout << a.Value() << endl;
    cout << b.Value() << endl;
    cout << c.Value() << endl;
    return 0;
}