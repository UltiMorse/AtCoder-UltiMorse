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

    int H; cin >> H;
    int height = 0;
    for (int i = 0; i < 30; ++i) {
        height += 1 << i;
        if (height > H) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return -1;
}
