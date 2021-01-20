#include<iostream>
#include<bitset>
using namespace std;

int StringToInt(const string& str){
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
        return num;
}

int main(){
    string str = "123XY56";
    try{
        auto num = StringToInt(str);
        cout << num << endl;
    }catch(const exception& e){
        cout << e.what() << endl;
    }

    try{
        bitset<8> b("0000x111");
        cout << b << endl;
    }catch (const invalid_argument& e){
        cout << "invalid_argumentを補足" << endl;
        cout << e.what() << endl;
    }
    

    return 0;
}