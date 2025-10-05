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

    vector<int> s(8);
    rep(i,8) cin >> s[i];

    bool ok = true;
    rep(i,7) {
        if (s[i] > s[i+1]) {
            ok = false;
            break;
        }
    }
    rep(i,8) {
        if (s[i] < 100 || s[i] > 675) {
            ok = false;
            break;
        }
    }
    rep(i,8) {
        if (s[i] % 25 != 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
