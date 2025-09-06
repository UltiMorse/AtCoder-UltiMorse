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
    
    string s; cin >> s;
    if (s[2] == s[3] && s[4] == s[5]) {
        cout << "Yes" << '\n';
        return 0;
    } else {
        cout << "No" << '\n';
        return 0;
    }
}
