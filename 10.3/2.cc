#include<cassert>
#include<iostream>
#include<limits>
#include<vector>
using namespace std;

template<typename T, int N>
class Array{
    static_assert(N > 0, "サイズは0より大きくなければなりません");

    public:
        int size() const {
            return N;
        }
        T data_[N];
};

int main(){
    Array<int, 2> a;
    return 0;
}