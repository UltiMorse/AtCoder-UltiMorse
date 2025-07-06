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

    int N; cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    set<string> ans;
    rep(i, N) rep(j, N) {
        if (i == j) continue;
        ans.insert(S[i] + S[j]);
    }
    cout << ans.size() << endl;
}
