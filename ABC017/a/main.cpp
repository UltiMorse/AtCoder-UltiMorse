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

    vector<int> s(3);
    vector<int> e(3);
    for (int i = 0; i < 3; ++i) {
        cin >> s[i] >> e[i];
    }
    int ans = 0;
    for (int i = 0; i < 3; ++i) {
        ans += s[i] * e[i] / 10;
    }
    cout << ans << '\n';
    return 0;
}
