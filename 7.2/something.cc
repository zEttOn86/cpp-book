#include "something.h"

#include <iostream>

#include "rectangle.h"

using namespace std;

void Something(){
    Rectangle r;

    r.height_ = 2;
    r.width_ = 3;
    cout << r.Area() << endl;
}