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

    string s; cin >> s;
    if (s[0] != s[1] && s[1] != s[2] && s[2] != s[0]) {
        cout << 6 << endl;
    } else if (s[0] == s[1] && s[1] == s[2]) {
        cout << 1 << endl;
    } else {
        cout << 3 << endl;
    }
}
