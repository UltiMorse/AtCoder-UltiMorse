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
    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
        --A[i];
    }

    int ans = 0;
    while (true) {
        vector<bool> exist(M);
        for(int i: A) exist[i] = true;
        bool flag = false;
        for (bool b : exist) {
            if (!b) flag = true;
        }
        if (flag) break;
        ++ans;
        A.pop_back();
    }
    cout << ans << endl;
}