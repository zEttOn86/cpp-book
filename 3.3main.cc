#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<string, int, string> person {"Bob", 20, "USA"};

    string name;
    int age;
    string country;
    tie(name, age, country) = person;
    cout << name << endl;
    cout << age << endl;
    cout << country << endl;


}