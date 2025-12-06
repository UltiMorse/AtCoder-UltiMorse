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

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int right = A[0];
    int ans = 0;

    rep(i, N) {
        int D = i + 1;
        if (D <= right) {
            ans++;
            right = max(right, D + A[i] - 1);
        }
    }
    cout << ans << endl;
    return 0;
}
