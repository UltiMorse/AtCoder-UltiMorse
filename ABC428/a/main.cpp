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

    int S, A, B, X; cin >> S >> A >> B >> X;
    
    int ans = 0;
    int t = 0;
    while (t < X) {
        int a = min(A, X - t);
        ans += a * S;
        t += a;
        int b = min(B, X - t);
        t += b;
    }
    cout << ans << endl;
}