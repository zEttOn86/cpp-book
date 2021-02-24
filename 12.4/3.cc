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
    // FundamentalTypes f1;
    // f1.i = -2;
    // f1.d = 2.71;

    // FundamentalTypes f2;
    // f2.i = -2;
    // f2.d = 2.71;

    // FundamentalTypes f3;
    // memset(&f3, 0, sizeof(f3));
    // cout << f1.i << endl;
    // cout << f1.d << endl;
    // cout << f2.i << endl;
    // cout << f2.d << endl;

    // if(memcmp(&f1, &f2, sizeof(FundamentalTypes))==0){
    //     cout << "f1 and f2 are same" << endl;
    // }else{
    //     cout << "f1 and f2 are different" << endl;
    // }

    // if(memcmp(&f1, &f3, sizeof(FundamentalTypes))==0){
    //     cout << "f1 and f3 are same" << endl;
    // }else{
    //     cout << "f1 and f3 are different" << endl;
    // }

    FundamentalTypes f1;
f1.i = -2;
f1.d = 2.71;

FundamentalTypes f2;
f2.i = 3 - 5;
f2.d = 2.71;

FundamentalTypes f3;
std::memset(&f3, 0, sizeof(f3));

if (std::memcmp(&f1, &f2, sizeof(FundamentalTypes)) == 0) {
    std::cout << "f1 and f2 are same" << std::endl;
} else {
    std::cout << "f1 and f2 are different" << std::endl;
}

if (std::memcmp(&f1, &f3, sizeof(FundamentalTypes)) == 0) {
    std::cout << "f1 and f3 are same" << std::endl;
} else {
    std::cout << "f1 and f3 are different" << std::endl;
}

    return 0;
}