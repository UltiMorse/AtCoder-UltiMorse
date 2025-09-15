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

    string s1, s2; cin >> s1 >> s2;

    if (s1[0] == '#' && s1[1] == '#' || s2[0] == '#' && s2[1] == '#') {
        cout << "Yes" << endl;
    } else if (s1[0] == '#' && s2[0] == '#' || s1[1] == '#' && s2[1] == '#') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
