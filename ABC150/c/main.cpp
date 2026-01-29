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
    vector<int> P(N), Q(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];


}

// next_permutationで辞書順による次の配列を生成できる。
// https://cpprefjp.github.io/reference/algorithm/next_permutation.html