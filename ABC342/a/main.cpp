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
    int n = s.size();
    char same;
    if (s[0] == s[1]) same = s[0];
    else if (s[0] == s[2]) same = s[0];
    else same = s[1];
    rep(i, n) {
        if (s[i] != same) {
            cout << i+1 << endl;
            return 0;
        }
    }
}
