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

    vector<vector<char>> c(4, vector<char>(4));
    rep(i, 4) {
        rep(j, 4) {
            cin >> c[i][j];
        }
    }

    rrep(i,4) {
        rrep(j,4) {
            if (j != 0) {
                cout << c[i][j] << " ";
            } else {
                cout << c[i][j];
            }
        }
        cout << endl;
    }
}
