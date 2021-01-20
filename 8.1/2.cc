#include<fstream>
#include<vector>
using namespace  std;

int main(){
    vector<int> nums = {1, 2, 3, 4};

    // バイナリ+出力モードでストリームを開く
    ofstream ofs("./nums.bin", ios::binary | ios::out);
    if(!ofs){
        return 1;
    }

    const auto size = sizeof(int) * nums.size(); //intのサイズ*配列要素数

    // 配列の先頭から配列全体のサイズ分をファイルに書き込む
    // 戦闘ポインタはキャストが必要
    // const char*型への変換はStrict Aliasing Rulesに反しない
    ofs.write(reinterpret_cast<const char *>(nums.data()), size);
}