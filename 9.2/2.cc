#include<iostream>
using namespace std;

template <typename T, typename U>
class Rectangle {
    public:
        Rectangle(T height, U width) : height_(height), width_(width) {}

        double Area() const {
            return height_ * width_;
        }

    private:
        const T height_;
        const U width_;
};

int main(){
    Rectangle<int, int> r1(10, 20);
    Rectangle<double, double> r2(1.2, 3.4);

    cout << r1.Area() <<endl;
    cout << r2.Area() <<endl;
    
    return 0;
}