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

    if (s == "SUN") {
        cout << 7 << endl;
    } else if (s == "MON") {
        cout << 6 << endl;
    } else if (s == "TUE") {
        cout << 5  << endl;
    } else if (s == "WED") {
        cout << 4 << endl;
    } else if (s == "THU") {
        cout << 3 << endl;
    } else if (s == "FRI") {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
}
