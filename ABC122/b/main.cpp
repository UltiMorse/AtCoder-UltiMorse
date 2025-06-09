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

    string s; cin>>s;
    int n = s.size();
    int cnt = 0;
    int ans = 0;
    rep(i,n) {
        if (s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T') {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << ans << endl;
}
