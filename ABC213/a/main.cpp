#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B; cin >> A >> B;
    int C = A ^ B;
    cout << C << endl;
    return 0;
}

// XOR の性質を使う解法
// もしこの問題が XOR ではなく足し算だった場合、つまり「
// A+C=B となる 
// C を求めよ」であれば、両辺から 
// A を引くことで 
// C=B−A として求めることができます。
// 足し算の場合に「両辺から 
// A を引く」にあたる操作は、XORの場合には何になるでしょうか？

// 実は、任意の非負整数 
// A に対して、
// A XOR A=0 が成り立ちます。したがって両辺に 
// A を XOR することで左辺の 
// A は相殺され、
// C=B XOR A として 
// C を求めることができました。

// XOR の計算には ^ の演算子が割り当てられている言語が多いです。

// 参考: https://atcoder.jp/contests/abc213/editorial/2363
