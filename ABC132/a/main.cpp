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

    vector<char> s(4);
    rep(i,4) cin >> s[i];

    sort(s.begin(), s.end());
    if ((s[0] == s[1]) && (s[2] == s[3]) && (s[1] != s[2])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}