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

    int A_sum = 0;
    rep(i,9) {
        int A; cin >> A;
        A_sum += A;
    }
    int B_sum = 0;
    rep(i,8) {
        int B; cin >> B;
        B_sum += B;
    }
    cout << A_sum - B_sum +1 << endl;
    return 0;
}
