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
    
    int h, w; cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    rep(i,h) rep(j,w) cin >> c[i][j];
    
    rep(i,h) {    
        rep(k,2) {
            rep(j,w) {
                cout << c[i][j];
                if (j == w - 1) {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}