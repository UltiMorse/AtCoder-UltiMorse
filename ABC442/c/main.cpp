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

    int N, M; cin >> N >> M;
    vector<ll> v(N+1, 0);
    rep(i,M) {
        ll a, b; cin >> a >> b;
        v[a]++;
        v[b]++;
    }

    rep(i,N) {
        ll ans = 0;
        
        ll n = (N - 1 - v[i + 1]);
        ans = n * (n - 1) * (n - 2) / 6;
        if(i != N - 1) {
            cout << ans << " ";
        } else {
            cout << ans << endl;
        }
    }
}

