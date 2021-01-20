#include<iostream>
#include"sum.h"
using namespace std;

// 関数テンプレートの定義
template <typename T>
inline T Sum(T a, T b){
    return a+b;
}

// 明示的インスタンス化
template int Sum<int>(int, int);


int main(){
    cout << Sum(1,2) << endl;
    return 0;
}