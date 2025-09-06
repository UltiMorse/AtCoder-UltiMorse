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

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int list[5] = {a,b,c,d,e};
    rep(i,5) {
        if (list[i] != i+1) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return -1;
}
