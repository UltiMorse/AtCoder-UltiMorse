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
    vector<char> res;
    for (char c : s) {
        if (c == '0') res.push_back('0');
        else if (c == '1') res.push_back('1');
        else if (!res.empty()) res.pop_back();
    }
    for (char c : res) cout << c;
    cout << '\n';
    return 0;
}
