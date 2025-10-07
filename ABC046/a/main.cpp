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

    int a, b, c; cin >> a >> b >> c;
    if (a == b && b == c) cout << "1" << '\n';
    else if (a == b || b == c || c == a) cout << "2" << '\n';
    else cout << "3" << '\n';
    return 0;
}
