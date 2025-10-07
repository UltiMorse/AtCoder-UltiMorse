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

    int a, b; cin >> a >> b;

    if (a == 2) a = 0;
    else if (a == 3) a = 1;
    else if (a == 4) a = 2;
    else if (a == 5) a = 3;
    else if (a == 6) a = 4;
    else if (a == 7) a = 5;
    else if (a == 8) a = 6;
    else if (a == 9) a = 7;
    else if (a == 10) a = 8;
    else if (a == 11) a = 9;
    else if (a == 12) a = 10;
    else if (a == 13) a = 11;
    else if (a == 1) a = 12;

    if (b == 2) b = 0;
    else if (b == 3) b = 1;
    else if (b == 4) b = 2;
    else if (b == 5) b = 3;
    else if (b == 6) b = 4;
    else if (b == 7) b = 5;
    else if (b == 8) b = 6;
    else if (b == 9) b = 7;
    else if (b == 10) b = 8;
    else if (b == 11) b = 9;
    else if (b == 12) b = 10;
    else if (b == 13) b = 11;
    else if (b == 1) b = 12;

    if (a == b) cout << "Draw" << '\n';
    else if (a < b) cout << "Bob" << '\n';
    else cout << "Alice" << '\n';
    return 0;
}
