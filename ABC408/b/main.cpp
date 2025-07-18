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
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    set<int> s(A.begin(), A.end());
    vector<int> ans(s.begin(), s.end());
    sort(ans.begin(), ans.end());
    int ans_size = ans.size();
    cout << ans_size << endl;
    rep(i,ans_size) {
        if (i+1 == ans_size) {
            cout << ans[i] << endl;
            return 0;
        }
        cout << ans[i] << " ";
    }
}
