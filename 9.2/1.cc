#include<iostream>
using namespace std;

template <typename T>
class Rectangle {
    public:
        Rectangle(T height, T width) : height_(height), width_(width) {}

        T Area() const {
            return height_ * width_;
        }

    private:
        const T height_;
        const T width_;
};

int main(){
    Rectangle<int> r1(10, 20);
    Rectangle<double> r2(1.2, 3.4);

    cout << r1.Area() <<endl;
    cout << r2.Area() <<endl;
    
    return 0;
}