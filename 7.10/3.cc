#include<iostream>
class Brightness{
    public:
        explicit Brightness(int value) : value_(value) {}

        int Value() const {
            return value_;
        }

        static Brightness Maximum();
        static Brightness Minimum();
        static Brightness Median();

    private:
        int value_;
};

Brightness Brightness::Maximum(){
    return Brightness(100);
}
Brightness Brightness::Minimum(){
    return Brightness(0);
}
Brightness Brightness::Median(){
    return Brightness((Maximum().value_ + Minimum().value_) / 2);
}
/*
static メンバ関数は static データメンバ以外の
データメンバは直接参照できないため、 static メンバ関数
ではなく通常の関数で十分なことが多いです。

通常の関数との違いは static メンバ関数は
クラスに属するため、 protected や private の
メンバにもアクセスできることです。

static メンバ関数は実行順序が定まるため、 static データメンバの代わりに 
static メンバ関数を使用することで 初期化順序を制御できない問題を
回避することができます。
*/

int main(){
    Brightness a(100);
    using namespace std;
    cout << a.Maximum().Value() << endl;
    cout << a.Minimum().Value() << endl;
    cout << a.Median().Value() << endl;
    return 0;
}

