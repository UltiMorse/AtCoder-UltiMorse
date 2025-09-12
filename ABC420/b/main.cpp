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

    int N, M; cin >> N >> M;
    vector<string> s(N);
    rep(i,N) cin >> s[i];

    vector<int> res(N, 0);

    rep(j,M) {
        int cnt_0 = 0; int cnt_1 = 0;
        rep(i,N) {
            if (s[i][j] == '0') {
                ++cnt_0;
            } else {
                ++cnt_1;
            }
        }
        if (cnt_0 == 0 || cnt_1 == 0) {
            rep(i,N) res[i]++;
        } else if (cnt_0 < cnt_1) {
            rep(i,N) if (s[i][j] == '0') res[i]++;
        } else {
            rep(i,N) if (s[i][j] == '1') res[i]++;
        }
    }
    int max_n = *max_element(res.begin(), res.end());
    vector<int> ans;
    rep(i,N) if (res[i] == max_n) ans.push_back(i+1);
    int k = ans.size();
    rep(i,k) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << endl;
}