#include<iostream>
class NonCopyable{
    public:
        NonCopyable() = default;

        // 暗黙的に定義されるコピーコンストラクタとコピー代入演算子を
        // 削除することでコピー禁止クラスを実現できる．
        NonCopyable(const NonCopyable&) = delete;
        NonCopyable& operator=(const NonCopyable&) = delete;

};

int main(){
    NonCopyable nc;
    return 0;
}