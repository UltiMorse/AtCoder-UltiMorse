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

    vector<int> v(5); rep(i,5) cin >> v[i];
    sort(v.begin(), v.end());
    int variety_cnt = 1;
    rep(i,4) {
        if (v[i] != v[i+1]) variety_cnt++;
    }
    cout << variety_cnt << endl;
}
