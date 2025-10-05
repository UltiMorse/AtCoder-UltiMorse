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
    vector<int> P(N);
    rep(i,N) cin >> P[i];
    int maxv = 0;
    for (int i = 1; i < N - 1; ++i) {
        maxv = max(maxv, P[i]);
    }
    if (P[0] > maxv) {
        cout << 0 << endl;
        return 0;
    }
    cout << maxv - P[0] + 1 << endl;
    return 0;
}
