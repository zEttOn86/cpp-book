#include<fstream>
#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main(){
    ofstream file("./fruits.txt");
    vector<string> fruits = {"apple",  "strawberry", "pear", "grape"};

    for(const auto fruit : fruits){
        file << fruit << endl;
    }

    return 0;
}