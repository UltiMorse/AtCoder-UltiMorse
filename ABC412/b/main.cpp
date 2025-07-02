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

    string s, t;
    cin >> s >> t;
    
    for (int i = 1; i < s.size(); ++i) {
        if (isupper(s[i])) {
            char c = s[i-1];
            bool flag = false;
            for (int j = 0; j < t.size(); ++j) {
                if (c == t[j]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
