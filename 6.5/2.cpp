#include<iostream>
#include<memory>
using namespace std;

int main(){
    unique_ptr<int> x(new int(100)); // int *x = new int(100) の代わり
    // unique_ptr<int> y = x;  //コピーできない．
    cout << *x << endl;
    return 0;
}