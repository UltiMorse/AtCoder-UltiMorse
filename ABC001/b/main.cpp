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

    int m; cin >> m;

    if (m < 100) {
        cout << 00 << endl;
    } else if (m >= 100 && m <= 5000) {
        if ((m / 100) > 1 && (m / 100) < 10) {
            cout << 0 << m / 100 << endl;
            return 0;
        }
        cout << m / 100 << endl;
    } else if (m >= 6000 && m <= 30000) {
        cout << m / 1000 + 50 << endl;
    } else if (m >= 350000 && m <= 70) {
        cout << ( (m / 1000) - 30 ) / 5 + 80 << endl;
    } else {
        cout << 89 << endl;
    }
    return 0;
}
