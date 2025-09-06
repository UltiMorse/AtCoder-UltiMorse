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

    int n; cin >> n;
    int cnt = 0;
    rep(i,n) {
        int d1, d2; cin >> d1 >> d2;
        if (d1 == d2) {
            ++cnt;
        }
        if (cnt == 3) {
            cout << "Yes" << endl;
            return 0;
        }
        if (d1 != d2) {
            cnt = 0;
        }
    }
    cout << "No" << endl;
    return 0;
}