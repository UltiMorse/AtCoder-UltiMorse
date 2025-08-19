#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

string s;

void solve() {
    int n = s.size();
    long double ans = 0;
    rep(i,n) {
        if (s[i] != 't') { // 先頭のt
            continue;
        }
        for (int j = i+2; j < n; ++j) {
            if (s[j] != 't') { // 末尾のt
                continue;
            }
            int x = 0;
            for (int ki = i; ki <=j; ++ki) {
                if (s[ki] == 't') ++x;
            }
            int len = (j - i + 1);
            long double item = (long double)(x-2) / (long double)(len-2); // 定義より
            if (item > ans) {
                ans = item;
            }
        }
    }
    cout << std::fixed << std::setprecision(17) << ans << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    solve();
    return 0;
}
// 解説見た