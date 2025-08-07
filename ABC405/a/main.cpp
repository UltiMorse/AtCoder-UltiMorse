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
    
    int r, x; cin >> r >> x;
    if (x == 1 ) {
        if (1600 <= r && r <= 2999) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    } else {
        if (1200 <= r && r <= 2399) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}