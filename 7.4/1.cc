#include <iostream>
using namespace std;

class Rectangle{
    public:
        int Area() const {
            return height_ * width_ ;
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

    const Rectangle& r = s;
    cout << "area = " << r.Area() << endl;

    return 0;
}