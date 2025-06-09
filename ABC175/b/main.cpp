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
    vector<int> l(n);
    rep(i, n) cin >> l[i];

    sort(l.begin(), l.end());
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                if (l[i] != l[j] && l[j] != l[k] && l[k] != l[i] && l[i] + l[j] > l[k]) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}
