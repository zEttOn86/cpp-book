#include <iostream>
using namespace std;

class inferior{
public:
    inferior() {
        data1_ = new int();
        data2_ = new int();//このnewに失敗するとdata1_は開放されない
    }
    ~inferior() noexcept{
        delete data1_;
        delete data2_;
    }
private:
    int *data1_;
    int *data2_;
};
class resource{
public:
    resource(){
        data_ = new int();
    }
    ~resource() noexcept{
        delete data_;
    }
private:
    int * data_;

};
// RAII技法が使われたただ一つのリソースを管理するクラスを複数メンバー変数として持つはおけ
class good {
    resource data1_;
    resource data2_;
};

int main(){
    return 0;
}