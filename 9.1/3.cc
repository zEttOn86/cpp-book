#include<iostream>
template <int N>
int Fibonacchi(){
    int a[N+1];
    a[0] = 0;
    a[1] = 1;
    for(auto i = 2; i <= N; ++i){
        a[i] = a[i-1] + a[i-2];
    }
    return a[N];
}

int main(){
    std::cout <<Fibonacchi<10>() <<std::endl; // 55
    return 0;
}