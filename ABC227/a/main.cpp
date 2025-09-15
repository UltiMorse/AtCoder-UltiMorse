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

    int N, K, A; cin >> N >> K >> A;
    int ans = (A + K - 1) % N; // A番目はA-1進んでいる
    if (ans == 0) ans = N;
    cout << ans << endl;
}