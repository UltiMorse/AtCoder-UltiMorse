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
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    rep(i,6) {
        if (s[i] == '1') {
            ++cnt1;
        } else if (s[i] == '2') {
            ++cnt2;
        } else if (s[i] == '3') {
            ++cnt3;
        }
    }
    if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
