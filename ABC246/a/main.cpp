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

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int ans_x = 0, ans_y = 0;

    if (x1 == x2) {
        ans_x = x3;
    } else if (x2 == x3) {
    ans_x = x1;
    }
    else {
        ans_x = x2;
    }

    if (y1 == y2) {
        ans_y = y3;
    } else if (y2 == y3) {
        ans_y = y1;
    } else {
        ans_y = y2;
    }

    cout << ans_x << " " << ans_y << endl;

}
