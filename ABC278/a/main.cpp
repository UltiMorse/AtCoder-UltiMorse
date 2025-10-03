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

    int N, K; cin >> N >> K;
    vector<int> A(N);
    rep(i,N) cin >> A[i];

    if (K > N) {
        rep(i,N-1) {
            cout << 0 << ' ';
        }
        cout << 0 << endl;
    } else {
        for (int i = K; i <= K + N - K; i++) {
            cout << A[i] << ' ';
        }
        rep(i,K-1) {
            if (i != K-1) {
                cout << 0 << ' ';
            } else {
                cout << 0 << endl;
            }
        }

    }
}
