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

    int H, W, R, C; cin >> H >> W >> R >> C;

    int ans = 0;
    
    // 横
    if (C != 1) ++ans; 
    if (C != W) ++ans;
    // 縦
    if (R != 1) ++ans;
    if (R != H) ++ans;

    cout << ans << endl;
}
