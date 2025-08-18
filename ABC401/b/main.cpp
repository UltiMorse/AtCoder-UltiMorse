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
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    bool access = false;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == "login") {
            access = true;
        } else if (s[i] == "logout") {
            access = false;
        } else if (s[i] == "private" && access != true) {
            ++res;
        } else {
            continue;
        }
    }
    cout << res << '\n';
    return 0;
}
