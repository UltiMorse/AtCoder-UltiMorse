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

    int A, B, C, D; cin >> A >> B >> C >> D;

    if (A < C) {
        cout << "Takahashi" << endl;
    } else if (A > C) {
        cout << "Aoki" << endl;
    } else if (B <= D) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}
