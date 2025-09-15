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

    int s, t, x; cin >> s >> t >> x;
    if (s < t) {
        // 日付をまたがない
        if (s <= x && x < t) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // 日付をまたぐ
        if (x >= s || x < t) { // ありえない値は制約によりない
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
