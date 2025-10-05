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

    int n; cin >> n;
    vector<pair<string, int>> a(n);
    rep(i, n) {
        cin >> a[i].first >> a[i].second;
    }
    int youngest = 1e9;
    int start = -1;
    rep(i,n) {
        if (a[i].second < youngest) {
            youngest = a[i].second;
            start = i;
        }
    }
    rep(i,n) {
        cout << a[(start + i) % n].first << endl;
    }
    return 0;
}   