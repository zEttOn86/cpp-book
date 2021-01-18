#include <iostream>
using namespace std;

/*
デストラクタを定義( = default 指定も含む)した場合、
ムーブコンストラクタ/代入演算子が自動定義されなくなり、
またコピーコンストラクタ/代入演算子は自動生成されるもの
の非推奨(=使ってはいけない)になるので、
残りの特殊メンバ関数もすべて定義するようにしましょう。*/
class DynamicArray {
    public:
        DynamicArray(int size, int initial_value){
            data_ = new int[size];
            for(auto i=0; i<size; ++i){
                data_[i] = initial_value;
            }
        }

        ~DynamicArray();

        void Set(int index, int value){
            data_[index] = value;
        }
        int Get(int index) const{
            return data_[index];
        }

    private:
        int *data_;
};
DynamicArray::~DynamicArray(){
    cout << "DynamicArray::~DynamicArray() is called" << endl;
    delete[] data_;
}
int main(){
    DynamicArray d(5, 1);
    cout << d.Get(2) << endl;
    d.Set(2, 10);
    cout << d.Get(2) << endl;
    return 0;
}