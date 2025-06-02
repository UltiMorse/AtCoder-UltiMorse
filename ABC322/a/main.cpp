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

    int n; cin >> n; string s; cin >> s;
    rep(i,n-2) {
        if (s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
