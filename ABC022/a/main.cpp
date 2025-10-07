#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S, T, W, A, X, ans = 0;
    cin >> N >> S >> T >> W;
    for (int i = 0; i < N; ++i) {
        cin >> A;
        if (S <= W && W <= T) ++ans;
        W += A;
    }
    cout << ans << '\n';
    return 0;
}
