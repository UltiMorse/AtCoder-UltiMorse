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

    int N, k; cin >> N >> k;
    string s; cin >> s;
    int n = s.size();
    rep(i,n) {
        if (i == k-1) {
            if (s[k-1] == 'A') {
                cout << 'a';
            } else if (s[k-1] == 'B') {
                cout << 'b';
            } else if (s[k-1] == 'C') {
                cout << 'c';
            }
        } else {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
