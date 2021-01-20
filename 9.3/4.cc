#include<iostream>

template<typename T>
T DoSomething(T a, T b){
    return a + b;
}

template<>
double DoSomething<double>(double a, double b){
    return a*b;
}
using namespace std;
int main(){
    cout << DoSomething(2, 3) << endl;
    cout << DoSomething(2.0, 3.0) << endl;
}