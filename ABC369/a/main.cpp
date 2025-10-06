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

    int A, B; cin >> A >> B;
    int cnt = 0;
    for (int x = -200; x <= 200; ++x) {
        if (2 * A == B + x) {
            ++cnt;
        } else if (2 * B == A + x) {
            ++cnt;
        } else if (2 * x == A + B) {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
