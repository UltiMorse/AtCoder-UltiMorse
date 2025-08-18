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

    string s; cin >> s;
    if (s=="red") {
        cout << "SSS" << endl;
    } else if (s=="blue") {
        cout << "FFF" << endl;
    } else if (s=="green") {
        cout << "MMM" << endl;
    } else {
        cout << "Unknown" << endl;
    }
    return 0;
}
