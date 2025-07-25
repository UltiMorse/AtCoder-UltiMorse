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

    int N, S;
    cin >> N >> S;
    vector<int> T(N);
    int pre = 0;
    rep(i,N) {
        cin >> T[i];
        if (T[i] - pre >= S + 0.5) {
            cout << "No" << endl;
            return 0;
        }
        pre = T[i];
    }
    cout << "Yes" << endl;
}
