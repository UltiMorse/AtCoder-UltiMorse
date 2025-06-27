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

    int n, s; cin >> n >> s;
    vector<int> t(n+1, 0); // 0から最初のたたきも
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }
    rep(i,n-1) {
        if (t[i+1] - t[i] > s) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
