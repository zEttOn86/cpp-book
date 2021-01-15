#include<iostream>
#include<memory>
using namespace std;

int main(){
    unique_ptr<int> x(new int(100)); // int *x = new int(100) の代わり
    unique_ptr<int> y(move(x)); // 所有権の移動
    // cout << *x << endl;
    cout << *y << endl;
    return 0;
}