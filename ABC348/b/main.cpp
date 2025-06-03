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
    vector<pair<int, int>> a(n);
    rep(i,n) {
        cin>> a[i].first >> a[i].second;
    }
    
    rep(i,n) {
        int ans = -1;
        int Maxdis = 0;
        rep(j,n) {
            int dis = (a[i].first - a[j].first)*(a[i].first - a[j].first) + (a[i].second - a[j].second)*(a[i].second - a[j].second);
            if (Maxdis < dis) {
                Maxdis = dis;
                ans = j;
            }
        }
        cout << ans+1 << endl;
    }
}
