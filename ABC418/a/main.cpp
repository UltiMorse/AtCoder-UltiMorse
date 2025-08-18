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

    int n; cin >> n; string s; cin >> s;
    int a = s.size() - 1;
    if ((s[a] == 'a' && s[a-1] == 'e') && s[a-2] == 't') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
