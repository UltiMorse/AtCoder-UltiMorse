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
    
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    int sum = 0;
    rep(i, N) {
        cin >> A[i];
        sum += A[i];
    }
    if (sum <= M) cout << "Yes" << endl;
    else cout << "No" << endl;
}
