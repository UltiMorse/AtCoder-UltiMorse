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

    int M, D; cin >> M >> D;
    int y, m, d; cin >> y >> m >> d;

    if (d == D) {
        if (m == M) {
            ++y;
            m = 1;
            d = 1;
        } else {
            ++m;
            d = 1;
        }
    } else {
        ++d; 
    }
    cout << y << ' ' << m << ' ' << d << endl;
    return 0;
}
