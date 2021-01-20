#include <iostream>
#include "counter.h"
using namespace std;

int main(){
    ++Counter::count_;
    cout << Counter::count_ <<endl;
    return 0;
}