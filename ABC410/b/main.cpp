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

    int n,q; cin>>n>>q;
    vector<int> x(q);
    rep(i, q) cin >> x[i];

    vector<int> ans(n,0);
    rep(i, q) {
        if (x[i] >= 1) {
            ++ans[x[i] - 1];
            cout << x[i] << " ";
        } else {
            int minnum = ans[0];
            int index = 0;
            rep(j, n) {
                if (ans[j] < minnum) {
                    minnum = ans[j];
                    index = j;
                }
            }
            ++ans[index];
            cout << index + 1 << " ";
        }
    }
    cout << endl;
}
