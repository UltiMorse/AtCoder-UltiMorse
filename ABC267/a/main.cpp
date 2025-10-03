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
    
    string s; cin >> s;
    if (s == "Monday") {
        cout << 5 << '\n';
    } else if (s == "Tuesday") {
        cout << 4 << '\n';
    } else if (s == "Wednesday") {
        cout << 3 << '\n';
    } else if (s == "Thursday") {
        cout << 2 << '\n';
    } else {
        cout << 1 << '\n';
    }
    return 0;
}
