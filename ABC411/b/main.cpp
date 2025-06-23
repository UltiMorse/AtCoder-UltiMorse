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
    vector<int> d(n);
    rep(i, n-1) cin >> d[i];

    for (int i = 0; i < n-1; ++i) {
        int dis = 0;
        for (int j = 1; j < n-i; ++j) {
            dis += d[i + j - 1];
            cout << dis << " ";
        }
        cout << endl;
    }

}
