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

    vector<int> A(4);
    rep(i,4) cin >> A[i];

    bool all_same = true;
    bool diff = true;
    rep(i,3) {
        if (A[i] != A[i + 1]) {
            all_same = false;
        }
    }
    if (all_same) {
        cout << 2 << endl;
        return 0;
    }
    vector<int> tmp(4);
    tmp = A;
    sort(tmp.begin(), tmp.end());
    rep(i,4) {
        if (tmp[i] != i + 1) {
            diff = false;
        }
    }
    if (diff) {
        cout << 0 << endl;
        return 0;
    }
    if (tmp[0] == tmp[1] && tmp[2] == tmp[3]) {
        cout << 2 << endl;
        return 0;
    }
    cout << 1 << endl;
    return 0;
}
