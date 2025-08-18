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

    string s, t; cin >> s >> t;
    int ans = t.size();

    for (int i = 0; i <= s.size()-t.size(); ++i) { // 重ねる先頭位置
        int cnt = 0;
        for (int j = 0; j < t.size(); ++j) {
            if (t[j] != s[i+j]) ++cnt;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}
