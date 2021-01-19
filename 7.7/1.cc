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
// 負号演算子の対象が引数として渡される
Integer operator-(const Integer& v){
    Integer tmp(-v.Value());
    return tmp;
}

int main(){
    Integer a(2);
    Integer b = -a;
    cout << a.Value() << endl;
    cout << b.Value() << endl;
    return 0;
}