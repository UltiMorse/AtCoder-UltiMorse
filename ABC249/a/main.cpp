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

    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = 0, aoki = 0;
    for (int k = 0; k < x; ++k) { // 一秒ごとに回す。秒速というところを読み違えた。
        if (k % (a + c) < a) {
            takahashi += b;
        }
        if (k % (d + f) < d) {
            aoki += e;
        }
    }
    if (takahashi > aoki) {
        cout << "Takahashi" << endl;
    } else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }

    // 解説参考
}

// A - Jogging 解説 by KoD
// 高橋君は 
// A+C 秒の周期で同じ行動を繰り返します。具体的には、
// k を非負整数として、高橋君が出発して 
// k 秒後から 
// k+1 秒後にかけての行動は

// k を 
// A+C で割った余りが 
// A より小さいとき、
// B メートル歩く
// そうでない場合、動かない
// となります。同様に、青木君の行動は

// k を 
// D+F で割った余りが 
// D より小さいとき、
// E メートル歩く
// そうでない場合、動かない
// k=0,1,…,X−1 について上記の判定を行うことで、二人がそれぞれ何メートル進んだか計算することができます。よって、この問題を 
// O(X) の時間計算量で解くことができました。
