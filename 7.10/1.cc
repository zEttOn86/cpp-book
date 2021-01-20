#include<iostream>
using namespace std;
class Counter{
    public:
        static int count_;
};
int Counter::count_ = 10;
int main(){
    Counter A;
    cout << A.count_ << endl;
    return 0;
}