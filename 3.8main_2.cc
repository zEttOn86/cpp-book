#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> x = {0, 1, 2, 3, 4, 5, 6};
    auto it1 = x.begin() + 2;
    auto it2 = x.begin() + 3;
    auto it3 = x.begin() + 4;

    cout << *it1 << endl;
    cout << *it2 << endl;
    cout << *it3 << endl;

    x.erase(x.begin()+3);

    cout << *it1 << endl;
    cout << *it2 << endl; // not good
    cout << *it3 << endl; // not good
}