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
    
    if (s[0] == s[1] && s[1] == s[2]) {
        char c = s[0];
        rep(i,n) {
            if (s[i] != c) {
                cout << s[i] << endl;
                return 0;
            }
        }
    }

    if (s[0] == s[1]) {
        cout << s[2] << endl;
        return 0;
    } else if (s[1] == s[2]) {
        cout << s[0] << endl;
        return 0;
    } else if (s[0] == s[2]) {
        cout << s[1] << endl;
        return 0;
    }
}
