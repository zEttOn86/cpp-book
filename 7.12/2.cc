#include<map>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

template <class T>
void destroy_at(T* location)
{
    location->~T();
}

/*
共用体にどんなデータが入っているかを別途変数で持っておき、
読み出す時に条件分岐して処理するというのが一般的な扱いです。
上の例では value クラスの中に kind という列挙型を定義して
その型の変数 k_ も定義しました。
この k_ に今なんのデータが共用体に入っているかを記録し、
共用体にアクセスするときはこの k_ を確認してからアクセスします。
*/
struct value {
    enum class kind{
        null,
        object,
        array,
        string,
        number,
        boolen
    };
    kind k_;
    union data {
        bool b_;
        double num_;
        string str_;
        vector<value> arr_;
        map<string, value> obj_;
        data() : b_{} {}
        ~data() {}
    } data_;
    value() : k_(){}
    value(string s) : k_(kind::string){
        new(&data_.str_) string(move(s));
    }
    ~value(){
        switch(k_){
            case kind::object:
                destroy_at(&data_.obj_); break;
            case kind::array:
                destroy_at(&data_.arr_); break;
            case kind::string:
                destroy_at(&data_.str_); break;
            default:
                break;
        }
    }
    kind get_kind(){return k_;}
    string get_string_or(string default_value){
        return (k_==kind::string) ? data_.str_ : default_value;
    }
};

int main(){
    value v1;
    // value v2;
    cout << static_cast<int>(v1.get_kind()) << " " << v1.get_string_or("bbb") <<endl;
    value v2("aaa");
    cout << static_cast<int>(v2.get_kind()) << " " << v2.get_string_or("bbb") <<endl;
}