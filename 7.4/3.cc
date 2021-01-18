#include <iostream>
using namespace std;

class Rectangle{
    public:
        virtual int Area() const = 0;
};

class Square : public Rectangle {
    public:
        int Area() const override {
            return height_ * width_;
        }
        int height_;
        int width_;
};

int main(){
    Square s;
    s.height_ = 10;
    s.width_ = 10;

    cout << s.Area() << endl;
    
    return 0;
}