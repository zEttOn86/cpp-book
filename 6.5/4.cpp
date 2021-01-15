#include<iostream>
#include<memory>
using namespace std;

int main(){
    shared_ptr<int> sp = make_shared<int>(246);
    weak_ptr<int> wp = sp; //sp を監視対象としてwpに登録する.
    cout << *sp << endl;
    
    shared_ptr<int> sp2 = wp.lock();// 有効な場合はspとリソースを共有するsp2が作られる．
    if(sp2){
        cout << *sp2 << endl;
    }
    else{
        cout << "リソースは解放済み" << endl;
    }
    return 0;
}