#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    // 文字列の長さがすべて等しいからできる話
    sort(s.begin(), s.end());
    string res = "";
    rep(i,n) res += s[i];
    cout << res << '\n';
    return 0;
}
