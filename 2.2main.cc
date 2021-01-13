#include <iostream>
using namespace std;
int main(){
    enum class Day {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
        };
    Day day = Day::Fri;
    int x =  static_cast<int>(Day::Fri);
    cout << x << endl;
    return 0; 
}