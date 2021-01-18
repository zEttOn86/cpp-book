#include <iostream>
#include <memory>
using namespace std;
class BasicArray {
    public:
        ~BasicArray(){
            cout << "BasicArray::~BasicArray is called" << endl;
        }

        virtual void Set(int index, int value) = 0;
        virtual int Get(int index) const = 0;
};

/*
デストラクタを定義( = default 指定も含む)した場合、
ムーブコンストラクタ/代入演算子が自動定義されなくなり、
またコピーコンストラクタ/代入演算子は自動生成されるもの
の非推奨(=使ってはいけない)になるので、
残りの特殊メンバ関数もすべて定義するようにしましょう。*/
class DynamicArray : public BasicArray {
    public:
        DynamicArray(int size, int initial_value){
            data_ = new int[size];
            for(auto i=0; i<size; ++i){
                data_[i] = initial_value;
            }
        }

        ~DynamicArray(){
            cout << "DynamicArray::~DynamicArray() is called" << endl;
            delete[] data_;
        }

        void Set(int index, int value){
            data_[index] = value;
        }
        int Get(int index) const{
            return data_[index];
        }

    private:
        int *data_;
};
//DynamicArray のデストラクタが呼ばれておらずメモリリークが発生してしまいます。
int main(){
    unique_ptr<BasicArray> b(new DynamicArray(5,1));
    cout << b->Get(2) << endl;
    b->Set(2, 10);
    cout << b->Get(2) << endl;
    return 0;
}