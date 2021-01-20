#include<iostream>
union A{int x; int y[4];};
struct B { A a; };
union C {B b; int k;};
int f(){
    C c;            // どの共用体のメンバの寿命も開始していない
    c.b.a.y[3] = 4; // OK: c.b, c.b.a.yの寿命が開始してオブジェクトが作られる
    return c.b.a.y[3];
}

struct X {const int a; int b;};
union Y {X x; int k;};
int g(){
    Y y = {{1,2}}; // ok: y.xはアクティブは共用体のメンバ
    int n = y.x.a;
    y.k = 4;        //ok] y.xの寿命が尽き，y.kの寿命が開始，y.kはアクティブな共用体のメンバ
    y.x.b = n;      
    // undefined behavior: Xのデフォルトコンストラクタは削除されています．
    // したがって，y.xの寿命は暗黙のうちに開始できません．
}
union Z {
    int int_value;
    char char_value[4];
};

int main(){
    f();
    g();
    Z z; //どの共用体のメンバの寿命も開始しない．
    z.int_value = 65535; //OK: z.int_valueの寿命が開始してオブジェクトが作られる
    z.char_value[0]; // NG: z.char_valueの寿命は開始していない．
}