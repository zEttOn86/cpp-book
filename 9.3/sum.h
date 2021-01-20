#ifndef SUM_H_
#define SUM_H_

// template <typename T>
// inline T Sum(T a, T b){
//     return a+b;
// }
// template <typename T>
// T Sum(T a, T b);  // 宣言だけ行う (inline もつけない)

template <typename T>
T Sum(T a, T b){
    return a+b;
}

extern template int Sum(int a, int b);

#endif // SUM_H_