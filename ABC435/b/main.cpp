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

    int N; cin >> N;
    vector<int> A(N);

    rep(i, N) cin >> A[i];

    int ans = 0;
    for (int L = 0; L < N; ++L) {
        int sum = 0;
        for (int R = L; R < N; ++R) {
            sum += A[R];
            bool flag = true;
            for (int i = L; i <= R; ++i) {
                if (sum % A[i] == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) ++ans;
        }
    }
    cout << ans << endl;
}
