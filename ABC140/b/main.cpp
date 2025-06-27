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

    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    int ans = 0;
    int pre = -1;
    rep(i,n) {
        ans += b[a[i]-1];
        if (pre + 1 == a[i]-1) {
            ans += c[pre];
        }
        pre = a[i]-1;
    }
    cout << ans << endl;
    return 0;
}
// a[i]を0-indexedにするだけで添え字は特にむずくない
