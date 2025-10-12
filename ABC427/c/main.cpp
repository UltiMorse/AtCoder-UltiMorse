#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// 参考: https://algo-method.com/tasks/1390TZsv/editorial
// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<int> &color, string &ans) {
    // 頂点 v に隣接する頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(color[v2] != -1) {
            // 隣り合う頂点どうしが同じ色なら、答えは No
            if(color[v2] == color[v]) {ans = "No";}
            continue;
        }
        // そうでなければ、頂点 v2 の色を color[v] と逆にしたうえで
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        color[v2] = 1 - color[v];
        dfs(v2, G, color, ans);
    }
    return;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
}
