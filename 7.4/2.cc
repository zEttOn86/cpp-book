#include <iostream>
using namespace std;

class Rectangle{
    public:
        /* 派生クラスで挙動を変更できるメンバ関数を
        仮想関数といいます。 仮想関数にするには基底
        クラスのメンバ関数に virtual をつけます。*/
        virtual void Describe() const{
            cout << "height = " << height_ << endl;
            cout << "width = " << width_ << endl;
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
        void Describe() const override{
            cout << "size = " << height_ << endl;
        }
};

int main(){
    Square s;
    s.SetSize(10);

    const Rectangle& r = s;
    r.Describe();

    return 0;
}