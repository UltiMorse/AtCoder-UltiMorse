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
    cout << (A | B) << endl;
}

// 解説　1, 2, 4 点なので2進数にできると気づく。bit演算(ここではor)を使う
