#include<iostream>
using namespace std;

void Print(int x){
    cout << "int: " << x << endl;    
}

void Print(double x){
    cout << "double: " << x << endl;    
}

int main(){
    Print(2);
    Print(2.1);

    return 0;
}