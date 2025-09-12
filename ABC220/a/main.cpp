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

    int A, B, C; cin >> A >> B >> C;

    for (int i = A; i <= B; ++i) {
        if (i % C == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
