#include<iostream>
using namespace std;

class Rectangle {
    public:
        Rectangle() : height_(0), width_(0) {
            cout << "Rectangle::Rectangle is called" << endl;
        }
        int Area() const{
            return height_ * width_;
        }
    
    private:
        const int height_;
        const int width_;
};

class Square : public Rectangle {
    public:
        Square(){
            cout << "Square::Square() is called" << endl;
        }
};

int main(){
    Square s;
    cout << "area = " << s.Area() << endl;
    return 0;
}
