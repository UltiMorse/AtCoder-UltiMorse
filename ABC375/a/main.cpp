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

    int N; cin >> N;
    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#') {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
