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

    while(true) {
        bool all_W = false;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'W') {
                s[i] = 'W';
                s[i + 1] = 'B';
                ++ans;
            }
        }
        if (all_W) {
            cout << ans << endl;
            return 0;
        }
    }
}
// RE後で修正