#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int group(int x) {
    if (x == 2) return 2;
    else if (x == 4 || x == 6 || x == 9 || x == 11) return 1;
    else return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    if (a + b < 10) cout << a + b << '\n';
    else cout << "error" << '\n';
    return 0;
}
