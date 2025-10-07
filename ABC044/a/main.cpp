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

    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if (n <= k) {
        cout << n * x << '\n';
    } else {
        cout << k * x + (n - k) * y << '\n';
    }
    return 0;
}
