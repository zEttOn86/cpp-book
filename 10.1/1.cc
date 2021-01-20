#include<iostream>
using namespace std;


// 正の整数を表す std::string を int に変換する処理において、 
// 無効な文字があった場合に変換処理をやめてエラーメッセージを
// 出力するには 次のようにします。
int main(){
    string str = "123XY56";
    try{
        int num = 0;
        for(const auto s : str){
            num *= 10;
            switch (s)
            {
            case '0': num += 0; break;
            case '1': num += 1; break;
            case '2': num += 2; break;
            case '3': num += 3; break;
            case '4': num += 4; break;
            case '5': num += 5; break;
            case '6': num += 6; break;
            case '7': num += 7; break;
            case '8': num += 8; break;
            case '9': num += 9; break;            
            default:
                // コンストラクタの引数でエラーメッセージを設定
                throw runtime_error("数値ではない文字が入っています");
            }
        }
        cout << num << endl;
    }catch(const runtime_error& e){
        // what()でエラーメッセージを取得
        cout << e.what() << endl;
    }

    try {
        throw 123;
    }catch(const bool v){
        cout << "bool:" << endl;
    }catch (const int v){
        cout << "int:" << endl;
    }

    try{
        throw runtime_error("test"); // runtime_errorを送出
    }catch(const exception& e){
        // runtime_errorはexceptionの派生クラスであるためここで補足される
        cout << "exception: " << e.what() << endl;
    }// }catch(const runtime_error& e){
    //     // この処理は実行されない
    //     cout << "runtime_error: " << e.what() << endl;
    // }

    try{
        throw 123;
    }catch(...){
        cout << "Unexcected exception was thrown." << endl;
    }

    return 0;
}