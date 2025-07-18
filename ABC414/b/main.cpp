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

    int N; cin>>N;
    vector<pair<char, ll>> v(N);
    ll len = 0;
    rep(i, N) {
        char c; ll l;
        cin >> c >> l;
        
        v[i] = {c, l};
        len += l;
        if (len > 100) {
            cout << "Too Long" << endl;
            return 0;
        }
    }
    string ans;
    rep(i, N) {
        ans += string(v[i].second, v[i].first);
    }
    cout << ans << endl;
}
