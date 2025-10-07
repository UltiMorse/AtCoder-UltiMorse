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
    int left = 0;
    int pre = 0;
    for (int i = 0; i < N; ++i) {
        int T, V; cin >> T >> V;
        left -= T - pre;
        if (left < 0) {
            left = 0;
        }
        left += V;
        pre = T;
    }
    cout << left << endl;
    return 0;
}
