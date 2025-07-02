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

    vector<int> a(3);
    rep(i,3) cin>> a[i];

    sort(a.begin(), a.end());
    int ans = 0;
    ans += a[2]-a[0];
    cout << ans << endl;
}   
