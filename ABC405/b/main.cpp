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
    
    int n, m; cin >> n >> m;
    vector<int> A(n), cnt(m);
    
    int ans = 0;
    rep(i,n) {
        if (cnt[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    rep(i,n) {
        rep(j,m) {
            if (cnt[j] == 0) {
                cout << ans << endl;
                return 0;
            }
        }
        --cnt[A[n-1-ans]];
        ++ans;
    }
}