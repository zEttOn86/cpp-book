#include<iostream>
using namespace std;

class Integer {
    public:
        //暗黙的な型変換で使用されないようにするには 変換コンストラクタに explicit をつけます。
        explicit Integer(int value) : value_(value) {}
    
        int Value() const {
            return value_;
        }
        // 負号演算子の対象のメンバ関数
        Integer operator-() const {
            Integer tmp(-Value()); // 演算対象は自オブジェクトを使用する．
            return tmp;
        }
    private:
        int value_;
};


int main(){
    Integer a(2);
    Integer b = -a;
    cout << a.Value() << endl;
    cout << b.Value() << endl;
    return 0;
}