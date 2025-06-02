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

    int a,b; cin>>a>>b;
    string s,t = "";
    rep(i,b) s += char('0'+a);
    rep(i,a) t += char('0'+b);
    if (s < t) {
        cout << s << endl;
    } else {
        cout << t << endl;
    } 
}
