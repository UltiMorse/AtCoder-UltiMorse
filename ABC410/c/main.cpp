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

    int n, q; cin>>n>>q;
    vector<int> a(n);
    rep(i,n) a[i] = i+1;

    int shift = 0;
    for (int i=0; i<q; ++i) {
        int type; cin>>type;
        if (type == 1) {
            int p, x; cin>>p>>x;
            a[(p-1+shift) % n] = x;
        } else if (type == 2) {
            int p; cin>>p;
            cout << a[(p-1+shift) % n] << endl;
        } else if (type == 3) {
            int k; cin>>k;
            shift = (shift+k) % n;
        }
    }
}
