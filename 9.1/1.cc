#include<iostream>
template<typename T>
T Sum(T a, T b){
    return a + b;
}

int main(){
    Sum<int>(1, 2);
    Sum<double>(1.2, 3.4);

    Sum(1, 2);
    Sum(1.2, 3.4);
    return 0;
}