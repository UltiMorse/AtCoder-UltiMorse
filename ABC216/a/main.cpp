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

    int n = s.size(); // 3固定ではない
    int y = s[n-1] - '0'; // ascii

    s = s.substr(0, n-2);

    if (y <= 2) {
        s += '-';
    } else if (y >= 7) {
        s += '+';
    }
    cout << s << endl;
}
