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
    if (s == "ACE" || s == "BDF" || 
        s == "CEG" || s == "DFA" || 
        s == "EGB" || s == "FAC" || 
        s == "GBD") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
