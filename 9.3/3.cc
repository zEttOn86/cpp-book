#include<iostream>
#include"sum.h"
using namespace std;

template int Sum<int>(int, int);


int main(){
    cout << Sum(1,2) << endl;
    return 0;
}