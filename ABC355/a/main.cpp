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

    int A, B; cin >> A >> B;
    if (A == B) {
        cout << -1 << endl;
    } else if (A == 1 && B == 2 || A == 2 && B == 1) {
        cout << 3 << endl;
    } else if (A == 2 && B == 3 || A == 3 && B == 2) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}
