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

    string s; cin>>s;
    int n = s.size();
    rep(i,n) rep(j,n) {
        if (i!=j && s[i] == s[j]) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}
