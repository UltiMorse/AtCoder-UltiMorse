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
    vector<int> L(N); rep(i,N) cin >> L[i];
    bool all0 = true;
    rep(i,N) {
        if (L[i] == 1) {
            all0 = false;
            break;
        }
    }
    if (all0) {
        cout << 0 << endl;
        return 0;
    }
    
    int left = 0, right = 0;
    int left_cnt = 0, right_cnt = 0;
    bool flag = true;
    rep(i,N) {
        if (L[i] == 0 && flag) {
            ++left;
        } else {
            left_cnt = left;
            flag = false;
        }
    }

    flag = true;
    rrep(i,N) {
        if (L[i] == 0 && flag) {
            ++right;
        } else {
            right_cnt = right;
            flag = false;
        }
    }

    cout << N - 1  - left_cnt - right_cnt << endl;
}
