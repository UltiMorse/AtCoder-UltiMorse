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
    
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    int Max_num = 0;
    int min_num = INT_MAX;
    rep(i, h) rep(j, w) {
        min_num = min(min_num, a[i][j]);
    }
    int ans = 0;
    rep(i,h) rep(j,w) {
        ans += a[i][j] - min_num;
    }
    cout << ans << endl;
    return 0;
}