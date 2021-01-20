#include<cassert>
#include<iostream>
#include<limits>
#include<vector>
using namespace std;

int Max(const vector<int>& v){
    assert(!v.empty());

    int max = numeric_limits<int>::min();
    for(auto e : v){
        if(e > max){
            max = e;
        }
    }
    return max;
}

int main(){
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2;

    cout << Max(v1) << endl;
    cout << Max(v2) << endl;

    return 0;
}