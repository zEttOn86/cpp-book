#include<iostream>
using namespace std;

class Rectangle{
    public:
        int Area() const{ // 内部では，メンバ変数の変更禁止
            return height_ * width_;
        }
        int height_;
        int width_;
};

class Square : public Rectangle {
    public:
        void SetSize(int size){
            height_ = size;
            width_ = size;
        }
};

int main(){
    Square s;
    s.SetSize(10);
    cout << s.Area() << endl;
    return 0;
}