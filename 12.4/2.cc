#include <cstdint>
#include <array>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

struct  FundamentalTypes{
        /* data */
        int16_t i;
        double d;
    };

int main(){
    FundamentalTypes f1;
    f1.i = -2;
    f1.d = 2.71;

    FundamentalTypes f2;
    
    memcpy(&f2, &f1, sizeof(FundamentalTypes));
    cout << f2.i << endl;
    cout << f2.d << endl;

    return 0;
}