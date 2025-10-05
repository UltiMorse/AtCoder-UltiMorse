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

    int aoki_cnt = 0, taka_cnt = 0;

    rep(i,N) {
        if (s[i] == 'T') {
            ++taka_cnt;
        } else {
            ++aoki_cnt;
        }
    }

    if (aoki_cnt > taka_cnt) {
        cout << "A" << endl;
    } else if (aoki_cnt < taka_cnt) {
        cout << "T" << endl;
    } else {
        // 同点の場合、先に最終勝利数に達した方が勝ち
        int win = (N + 1) / 2; // 必要な勝利数
        int t_cnt = 0, a_cnt = 0;
        
        rep(i,N) {
            if (s[i] == 'T') {
                ++t_cnt;
                if (t_cnt == win) {
                    cout << "T" << endl;
                    return 0;
                }
            } else {
                ++a_cnt;
                if (a_cnt == win) {
                    cout << "A" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
