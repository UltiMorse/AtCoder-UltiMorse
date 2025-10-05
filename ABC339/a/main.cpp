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
    int start = 0;
    rrep(i,n) {
        if (s[i] == '.') {
            start = i;
            break;
        }
    }
    cout << s.substr(start + 1, n - start) << endl;
    return 0;
}
