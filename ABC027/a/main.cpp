#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    if (l1 == l2) cout << l3 << '\n';
    else if (l2 == l3) cout << l1 << '\n';
    else cout << l2 << '\n';
    return 0;
}
