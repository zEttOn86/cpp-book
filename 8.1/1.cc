#include<iostream>
using namespace std;

enum class Day {
    Sun, //0
    Mon, //1
    Tue, //2
    Wed, //3
    Thu, //4
    Fri, //5
    Sat  //6
};
Day day1 = static_cast<Day>(1); //Day::Mon
int day2 = static_cast<int>(Day::Tue); // 2
class Square{
    public:
        explicit Square(int size) : size_(size) {}
    private:
        int size_;
};
Square square = static_cast<Square>(10);
const string str("hoge");
string& x = const_cast<string&>(str);

// Square square(10);
int main(){
    double dx = 3.14;
    int x = static_cast<int>(dx); //3
    x = 100;
    int* px = static_cast<int*>(&x);
    int* ppx = &x;
    cout << dx << endl;
    cout << px << endl;
    cout << &x << endl;
    cout << ppx << endl;
    return 0;
}