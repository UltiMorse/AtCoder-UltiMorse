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

    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll limit = 1;
    ll ans = 1;
    rep(i, k) limit *= 10;
    rep(i, n) {
        if (ans > limit / a[i]) {
            ans = 1;
        } else {
            ans *= a[i];
            if (ans >= limit) ans = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
