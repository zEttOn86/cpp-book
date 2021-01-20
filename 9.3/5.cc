#include<iostream>
using namespace std;

template<typename T>
class Array{
    public:
        explicit Array(int size) : size_(size), data_(new T[size_]) {}
        ~Array(){
            delete[] data_;
        }

        int Size() const {
            return size_;
        }
    
    private:
        const int size_;
        T* data_;
};

//この例では8個の bool 値を1個の uint8_t で扱って
//省メモリ化するために、 bool に対する完全特殊化を行っています。
template<>
class Array<bool>{
    public: 
        explicit Array(int size) 
            : size_(size),
              data_size_((size-1)/8+1),
              data_(new uint8_t[data_size_]) {}
        
        ~Array(){
            delete[] data_;
        }

        int Size() const {
            return size_;
        }
    
    private:
        const int size_;
        const int data_size_;
        uint8_t* data_;
};
int main(){
    return 0;
}