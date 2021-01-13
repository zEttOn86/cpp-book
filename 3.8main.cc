#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> x = {0, 1, 2, 3, 4};
    // std::count_if は条件を満たすコンテナ要素の個数を数える処理
    //   - 第1引数と第2引数で範囲を指定
    //   - 第3引数で関数オブジェクトで条件を指定
    auto n = count_if(x.begin(), x.end(), [](const int v) {
        // 0 より大きい 2 の倍数を探す
        if(v<=0){
            return false;
        }
        if(v%2!=0){
            return false;
        }
        return true;
    } );

    cout << n << endl;  
}