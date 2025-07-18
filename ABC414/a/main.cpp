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
    
    int N, L, R; cin >> N >> L >> R;
    int ans = 0;
    rep(i,N) {
        int X, Y; cin >> X >> Y;
        if (X <= L && R <= Y) ++ans;
    }
    cout << ans << endl;
}
