#include<iostream>
#include<string>
using namespace std;

union X{
    int m1;
    double m2;
    string m3;
    X() : m1(0) {}
    ~X() {}    
};

template <class T>
void destroy_at(T* location)
{
    location->~T();
}

int main()
{
    X x;
    new (&x.m3) string("aaa");
    destroy_at(&x.m3);
    // return 0;
}
/*
構造体の大きさがメンバーのすべての型の大きさの総和に
パディングなどを足したものであったのに対して、 
共用体ではメンバーの型の大きさの最大値にパディングなどを
足したものとなります。 
結果としてメモリーを節約することができるので、
複数の型のどれかを格納したいという場合にはよく用いられます。
*/