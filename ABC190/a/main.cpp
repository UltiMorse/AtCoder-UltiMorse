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

    int a, b, c; cin >> a >> b >> c;

    if (c == 0) {
        if (a > b) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    } else {
        if (a >= b) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    }
}
