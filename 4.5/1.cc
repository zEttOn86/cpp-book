#include<iostream>
#include "something.h"
using namespace std;

inline void HelloWorld(){
    cout <<  "Hello World" << endl;
}

int main(){
    HelloWorld();
    Something();
    return 0;
}