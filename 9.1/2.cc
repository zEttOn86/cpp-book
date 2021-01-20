#include<iostream>
template<typename T, typename U>
auto Sum(T a, U b) -> decltype(a + b){
    return a + b;
}

int main(){
    Sum<int>(1, 2);
    Sum<double>(1.2, 3.4);

    Sum(1, 2);
    Sum(1.2, 3.4);
    return 0;
}