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

    int n; cin >> n;
    int a, x, y;

    rep(i,n) {
        cin >> a >> x >> y;

        int A_x = abs(a - x);
        int A_y = abs(a - y);
        
        bool flag = false;
        for (int j = 1; j <= 100; ++j) {
            if (j == a) continue;
            int B_x = abs(j - x);
            int B_y = abs(j - y);
            
            if (B_x < A_x && B_y < A_y) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
