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

    int n, m, q; cin >> n >> m >> q;
    vector<set<int>> can(n);
    vector<bool> canall(n,false);
    for (int i = 0; i < q; ++i) {
        int t, x;
        cin >> t >> x;
        --x;
        if (t == 1) {
            int y;
            cin >> y;
            --y;
            can[x].insert(y);
        } else if (t == 2) {
            canall[x] = true;
        } else {
            int y;
            cin >> y;
            --y;
            if (canall[x] || can[x].contains(y)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
