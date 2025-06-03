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

    int n; cin>>n;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    int m; cin>>m;
    vector<pair<int, int>> p(m);
    rep(i,m) cin>> p[i].first >> p[i].second;

    rep(i,m) {
        int ans = 0;
        rep(j,n) {
            if (j != p[i].first-1) {
                ans += t[j];
            } else {
                ans += p[i].second;
            }
        }
        cout << ans << endl;
    }
    
}
