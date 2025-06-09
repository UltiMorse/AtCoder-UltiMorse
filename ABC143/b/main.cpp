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
    vector<int> d(n);
    rep(i, n) cin >> d[i];

    int ans = 0;
    rep(i,n) {
        for (int j=i+1; j<n; ++j) {
            ans += d[i] * d[j];
        }
    } 
    cout << ans << endl;
}
