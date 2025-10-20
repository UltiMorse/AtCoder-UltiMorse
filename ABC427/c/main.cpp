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

    vector<pair<int, int>> edges(M);
    for(auto&& [u, v] : edges) {
        cin >> u >> v;
        --u, --v;
    }

    int ans = M;

    for (int bit = 0; bit < 1 << N; ++bit) {
        int delete_count = 0;
        for (const auto & [u,v] : edges) {
            if ((1 & (bit >> u)) == (1 & (bit >> v))) {
                ++delete_count;
            }
        }
        ans = min(ans, delete_count);
    }
    cout << ans << endl;
    return 0;
}
