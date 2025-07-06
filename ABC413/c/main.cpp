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
    
    int Q; cin >> Q;
    deque<pair<ll, ll>> dq;
    
    while (Q--) {
        int t; cin >> t;
        if (t == 1) {
            ll c, x; cin >> c >> x;
            dq.push_back({x, c});
        } else {
            ll k; cin >> k;
            ll sum = 0;
            while (k>0) {
                auto &f = dq.front();
                ll del = min(f.second, k);
                sum += f.first * del;
                f.second -= del;
                k -= del;
                if (f.second == 0) dq.pop_front();
            }
            cout << sum << endl;
        }
    }
}
