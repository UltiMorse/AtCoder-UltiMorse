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

    int N, Q;
    cin >> N >> Q;
    vector<int> A(N + 2, 0); // 1-indexed, 両端にダミー
    int cnt = 0;

    while (Q--) {
        int x;
        cin >> x;
        // 反転前の状態
        if (A[x] == 0) {
            // 白→黒
            if (A[x-1] == 0 && A[x+1] == 0) cnt++; // 新しい区間
            if (A[x-1] == 1 && A[x+1] == 1) cnt--; // 2区間が1つに
        } else {
            // 黒→白
            if (A[x-1] == 0 && A[x+1] == 0) cnt--; // 区間が消える
            if (A[x-1] == 1 && A[x+1] == 1) cnt++; // 1区間が2つに
        }
        A[x] = 1 - A[x];
        cout << cnt << endl;
    }
    return 0;
}