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

    int N; cin >> N;
    string s; cin >> s;

    if (N % 2 != 1) {
        cout << "No" << endl;
        return 0;
    } else if (N == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    int center = N / 2;
    if (s[center] != '/') {
        cout << "No" << endl;
        return 0;
    }
    rep(i,center) {
        if (s[i] != '1') {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = center + 1; i < N; ++i) {
        if (s[i] != '2') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
