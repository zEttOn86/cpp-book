#include<iostream>
using namespace std;

int CharToInt(const char c){
    switch (c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6; 
        case '7': return 7; 
        case '8': return 8; 
        case '9': return 9;             
        default:
            // コンストラクタの引数でエラーメッセージを設定
            throw runtime_error("数値ではない文字が入っています");
    }           
}

int StringToInt(const string& str){
    int num = 0;
    for (const auto s : str){
        num *= 10;
        // CharToIntから例外が送出される
        num += CharToInt(s);
    }
    return num;
}

// 正の整数を表す std::string を int に変換する処理において、 
// 無効な文字があった場合に変換処理をやめてエラーメッセージを
// 出力するには 次のようにします。
//関数が例外を送出しないことを明示的に表すには noexcept をつけます。 
//デストラクタは暗黙的に noexcept になります。
int Compare(int a, int b) noexcept{
    if(a<b){
        return -1;
    }else if(a>b){
        return 1;
    }else{
        return 0;
    }
}
int Compare(int a, int b) noexcept(true);// 例外を送出しない
int CharToInt(const char c) noexcept(false); // 例外を送出する
//一般に プログラム実行前に検出可能なものは std::logic_error、 
//プログラム実行時にのみ検出可能なものは std::runtime_error 
//として分類されています。
int main(){
    string str = "123XY56";
    // try{
    //     // StringToInt内部のCharToIntから例外が送出される
    //     auto num = StringToInt(str);
    //     cout << num << endl;
    // }catch(const runtime_error& e){
    //     // what()でエラーメッセージを取得
    //     cout << e.what() << endl;
    // }
    auto num = StringToInt(str);
    cout << num << endl;
    

    return 0;
}