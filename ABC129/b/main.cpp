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
    
    int n; cin >> n;
    vector<int> w(n);
    int sum = 0;
    rep(i,n) {
        cin>> w[i];
        sum += w[i];
    }

    int mini = sum;
    int prefix_sum = 0;
    rep(i,n) {
        cin>> w[i];
        prefix_sum += w[i];
        mini = min(mini, abs(prefix_sum - (sum - prefix_sum)));
    }
    cout << mini << endl;
    // 解説参考にした。全体の和から先頭から連続する和を引く。
    // かなり教育的な内容（累積和の基本？）
}

