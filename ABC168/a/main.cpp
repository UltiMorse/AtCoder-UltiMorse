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
    int n = s.size();
    char N = s[n - 1];

    if (N == '2' || N == '4' || N == '5' || N == '7' || N == '9') {
        cout << "hon" << endl;
    } else if (N == '0' || N == '1' || N == '6' || N == '8') {
        cout << "pon" << endl;
    } else {
        cout << "bon" << endl;
    }
}
