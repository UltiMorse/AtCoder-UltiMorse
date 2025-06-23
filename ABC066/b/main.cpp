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
    int ans = 0;
    int n = s.size();
    for (int i = 2; i < n; ++i) if (i%2==0) {
        string A = s.substr(0,i/2);
        string B = s.substr(i/2,i/2);
        if (A==B) ans = max(ans,i);
    }
    cout << ans << endl;
}
