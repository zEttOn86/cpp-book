#include <iostream>
using namespace std;

class Rectangle{
    public:
        Rectangle(int height, int width) : height_(height), width_(width) {}
    
        private:
            const int height_;
            const int width_;

};

int main(){
    Rectangle r(10, 20);
    
    return 0;
}