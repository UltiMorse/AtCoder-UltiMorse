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

    vector<string> s(12);
    rep(i,12) cin >> s[i];
    int cnt = 0;
    
    rep(i,12) {
        bool flag = false;
        int l = s[i].size();
        rep(j,l) {
            if (s[i][j] == 'r' && !flag) {
                ++cnt;
                flag = true;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
