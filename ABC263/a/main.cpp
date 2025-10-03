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

    vector<int> v(5);
    rep(i,5) cin >> v[i];
    sort(v.begin(), v.end());
    if ((v[0] == v[1]) && (v[2] == v[3]) && (v[3] == v[4])) {
        cout << "Yes" << endl;
        return 0;
    } else if ((v[0] == v[1]) && (v[1] == v[2]) && (v[3] == v[4])) {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;
        return 0;
    }
}