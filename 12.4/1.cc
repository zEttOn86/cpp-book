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
    FundamentalTypes f;
    memset(&f, 0, sizeof(f));
    cout << f.i << endl;
    cout << f.d << endl;

    memset(&f, 0xff, sizeof(f));
    cout << f.i << endl;
    cout << f.d << endl;

    return 0;
}