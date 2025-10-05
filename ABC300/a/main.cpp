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

    int N, A, B; cin >> N >> A >> B;
    int ans = A + B;
    rep(i,N) {
        int c; cin >> c;
        if (c == ans) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return -1;
}
