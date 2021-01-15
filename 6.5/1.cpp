#include<iostream>
#include<memory>
using namespace std;

int main(){
    shared_ptr<int> x = make_shared<int>(100); // int *x = new int(100) の代わり
    {
        shared_ptr<int> y= x; // 通常のポインタ同様，コピーすることで所有権が共有される
        cout << *y << endl;
    }  
    cout << *x << endl;
    return 0;
}