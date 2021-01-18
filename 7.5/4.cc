#include <iostream>
using namespace std;

class Square{
    public:
        /*暗黙的な型変換を意図して使用する場合を除き、 
        受け取る値が1つのコンストラクタには explicit 
        をつけることが望ましいです。*/
        explicit Square(int size) : size_(size) {}
        int Area() const {
            return size_ * size_;
        }
    private:
        int size_;
};

int main(){
    Square s1(10);
    // Square s2 = 20;
    cout << s1.Area() << endl;
    // cout << s2.Area() << endl;

    return 0;
}