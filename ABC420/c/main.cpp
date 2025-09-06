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

    int N, Q; cin >> N >> Q;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    ll sum_n = 0;
    rep(i,N) {
        sum_n += min(A[i], B[i]);
    }
    char c; int x; ll v;
    rep(j, Q) {
        cin >> c >> x >> v;
        --x;
    
        sum_n -= min(A[x],B[x]);
        if (c == 'A')  {
            A[x] = v;
        } else {
            B[x] = v;
        }
        sum_n += min(A[x],B[x]);
        cout << sum_n << endl;
    }
}
