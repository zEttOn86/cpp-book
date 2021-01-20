#include<cstdint>
#include<iostream>
#include<iomanip>

using std::uint16_t;
using std::uint32_t;
using namespace std;

uint32_t swaphalves(uint32_t a){
    uint32_t acopy = a;
    uint16_t *ptr = reinterpret_cast<uint16_t*>(&acopy); // ptrはacopyのaliasにならない
    uint16_t tmp = ptr[0];
    ptr[0] = ptr[1]; // Undefined Behavior: ptrへの変更操作があるがailiasではない
    ptr[1] = tmp;
    return acopy;
}

int main(){
    uint32_t a = 32;
    cout << hex << setfill('0') << setw(8) << a << endl;
    a = swaphalves(a);
    cout << setw(8) << a << endl;
}