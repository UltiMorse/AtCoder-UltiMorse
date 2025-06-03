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

    int t; cin>>t;
    rep(i,t) {
        int n; cin>>n;
        vector<int> a(n);
        int cnt = 0;
        rep(j,n) {
            cin>>a[j];
            if (a[j]%2 != 0) {
                ++cnt;
            }
        }
        cout<<cnt<<endl;
    }
}
