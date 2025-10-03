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

    int L1, R1, L2, R2; cin >> L1 >> R1 >> L2 >> R2;

    if (R1 < L2 || R2 < L1) {
        cout << 0 << endl;
    } else {
        cout << min(R1, R2) - max(L1, L2) << endl;
    }
}
