#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int f(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<ll> ans(N+1);
    ans[0] = 1;

    for (int i = 1; i <= N; ++i) {
        ll sum_n = 0;
        for (int j = 0; j < i; ++j) {
            sum_n += f(ans[j]);
        }
        ans[i] = sum_n;
    }
    cout << ans[N] << endl;
}
