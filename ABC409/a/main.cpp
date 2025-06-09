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

    int n; string t, a;
    cin >> n >> t >> a;

    rep(i,n) {
        if (t[i] == 'o' && a[i] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
