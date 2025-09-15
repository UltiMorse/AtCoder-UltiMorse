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

    int A, B, C, X; cin >> A >> B >> C >> X;

    if (X <= A) {
        cout << 1 << endl;
    } else if (X > B) {
        cout << 0 << endl;
    } else {
        cout << fixed << setprecision(15) << (ld)C / (B - (A + 1) + 1) << endl;
    }

}
