#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    string s, t; cin >> s >> t;
    int a, b; cin >> a >> b;
    string u; cin >> u;
    if (u == s) {
        a--;
    } else if (u == t) {
        b--;
    }
    cout << a << " " << b << '\n';
    return 0;
}
