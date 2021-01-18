#include<iostream>
using namespace std;

class Rectangle {
    public:
        Rectangle(int height, int width) : height_(height), width_(width) {}
        int Area() const{
            return height_ * width_;
        }
    
    private:
        const int height_;
        const int width_;
};

class Square : public Rectangle {
    public:
        Square(int size) : Rectangle(size, size) {
            cout << "Square::Square() is called" << endl;
        }
};

int main(){
    Square s(0);
    cout << "area = " << s.Area() << endl;
    return 0;
}
