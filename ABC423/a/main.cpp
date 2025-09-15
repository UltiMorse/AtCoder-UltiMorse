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

    int x, c; cin >> x >> c;
    for (int i = 0; i <= 1e7; i += 1000) {
        int y = i / 1000 * c;
        if (i + y > x) {
            cout << i - 1000 << endl;
            return 0;
        }
    }
}
