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

    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    int b = 0;

    rrep(i, n) {
        int d = (s[i] - '0' - b + 10) % 10;
        ans += 1 + d;
        b = (b + d) % 10;
    }
    cout << ans << endl;
    return 0;
}
