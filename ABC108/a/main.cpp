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

    int K; cin >> K;

    if (K % 2 == 0) {
        cout << (K / 2) * (K / 2) << endl;
        return 0;
    } else {
        cout << (K / 2) * (K / 2 + 1) << endl;
    }
    return 0;
}
