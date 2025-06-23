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

    int n; cin>>n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    vector<int> save(n);
    rep(i,n) save[i] = p[i];
    sort(p.begin(), p.end());

    bool ok = true;
    rep(i,n-1) {
        if (save[i] > save[i+1]) {
            ok = false;
        }
    }

    if (ok) {
        cout << "YES" << endl;
        return 0;
    }

    rep(i,n) {
        rep(j,n) {
            swap(save[i], save[j]);
            ok = true;
            rep(k,n-1) {
                if (save[k] > save[k+1]) {
                    ok = false;
                    break;
                }
            }
            swap(save[i], save[j]);
            if (ok) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
