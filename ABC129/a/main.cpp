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

    int P, Q, R; cin >> P >> Q >> R;

    int max_n = 0;
    max_n = max(max(P,Q), max(Q,R));
    if (max_n == P) {
        cout << Q + R << endl;
    } else if (max_n == Q) {
        cout << R + P << endl;
    } else {
        cout << P + Q << endl;
    }
    return 0;
}
