#include <iostream>
using namespace std;

class Copyable{
    public:
        Copyable(){}
        Copyable(const Copyable& c){}    
};

int main(){
    Copyable c1;
    Copyable c2(c1);    
    return 0;
}