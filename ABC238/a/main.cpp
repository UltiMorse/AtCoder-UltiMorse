#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n; cin >> n;
//     ll left = (1LL << n);
//     ll right = n * n;

//     if (left > right) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }

// 結論から言うと、
// 2≤n≤4 のとき答えは No、そうでないとき答えは Yes となります。

// n=1 のとき 
// 2 
// n
//  >n 
// 2
//   であること、および 
// 2≤n≤4 において 
// 2 
// n
//  ≤n 
// 2
//   であることは実際に計算すれば明らかです。

// 問題は 
// 5≤n のときですが、これは数学的帰納法により 
// 2 
// n
//  >n 
// 2
//   であることを示すことが可能です。

// 参考: https://atcoder.jp/contests/abc238/editorial/3355

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
	if (2 <= n && n <= 4) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
// 計算量比較などでよくある話。O(2^n)とO(n^2)の増加量の比較　指数が最悪
