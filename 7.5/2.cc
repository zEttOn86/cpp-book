#include <iostream>
using namespace std;

class Rectangle{
    public:
        Rectangle(int height, int width);
    
        private:
            const int height_;
            const int width_;

};
Rectangle::Rectangle(int height, int width) : height_(height), width_(width) {}

int main(){
    Rectangle r(10, 20);
    
    return 0;
}