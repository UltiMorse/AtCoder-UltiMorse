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

    string s, t; cin >> s >> t;
    int x, y;
    if (s == "Ocelot") {
        x = 0;
    } else if (s == "Serval") {
        x = 1;
    } else {
        x = 2;
    }
    if (t == "Ocelot") {
        y = 0;
    } else if (t == "Serval") {
        y = 1;
    } else {
        y = 2;
    }

    if (x >= y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}