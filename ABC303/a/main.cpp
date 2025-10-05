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
    string s, t; cin >> s >> t;

    rep(i,N) {
        if ((s[i] == t[i]) || 
            (s[i] == '1' && t[i] == 'l') || 
            (s[i] == '0' && t[i] == 'o') ||
            (s[i] == 'l' && t[i] == '1') || 
            (s[i] == 'o' && t[i] == '0')) {
            continue;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
