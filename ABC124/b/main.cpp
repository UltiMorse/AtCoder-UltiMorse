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
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int cnt = 0;
    
    rep(i,n) {
        bool flag = true;
        rep(j,i) { // 開区間だからi-1と書くのは誤り
            if (h[j] > h[i]) {
                flag = false;
            }
        }
        if (flag) ++cnt;
    }
    cout << cnt << endl;
}
