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

    int N, M, P; cin >> N >> M >> P;
    int ans = 0;
    for (int i = M; i <= INT_MAX; i += P) {
        if (i > N + P) {
            break;
        }
        ++ans;
    }
    cout << ans - 1 << endl;
    return 0;
}
