#include<iostream>
using namespace std;

template<typename T, int N>
class Array{
    public:
        int size() const {
            return N;
        }
        T data_[N];
};

int main(){
    
    Array<int, 5> a;

    cout << a.size() <<endl;
    
    return 0;
}