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
    vector<int> com(N+1, 1); // それぞれのバージョンごとの台数を保持。それぞれのコンピュータごとのバージョンを保持しているのではない。
    com[0] = 0;
    int old = 1;
    while (Q--) {
        int x, y; cin >> x >> y;
        int res = 0;
        while(old <= x) { // 完全に理解した
            res += com[old];
            com[y] += com[old];
            ++old;
        }
        cout << res << endl;
    }
    return 0;
}

// 解説: https://atcoder.jp/contests/abc426/editorial/14142
// 現在の PC のうち最古のバージョンをO とするとO 以上 X 以下の全てのバージョンの PC がアップグレードの対象となる。
// コンテスト中はyを前処理、台数N台を配列などで個別に管理することを考えたが、前者は意味ない、後者はわからん。
