#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 集まるマスを固定して考える
    // 中央が最速
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];

    int x = *max_element(X.begin(), X.end()) - *min_element(X.begin(), X.end());
    int y = *max_element(Y.begin(), Y.end()) - *min_element(Y.begin(), Y.end());

    auto ans = (max(x, y) + 1) / 2;
    cout << ans << endl;
}
