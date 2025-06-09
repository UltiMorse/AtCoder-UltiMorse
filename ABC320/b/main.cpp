#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

bool is_palindrome(string T) {
    int M = (int)T.size();
    // i は T の先頭から右へ、j は T の末尾から左へ
    for (int i = 0, j = M-1; i < j; ++i, --j) {
        if (T[i] != T[j]) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    int N = (int)S.size();
    int res = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            string sub = "";
            for (int k = i; k < j; ++k) sub += S[k];
            
            // 部分文字列 sub について調べる
            if (is_palindrome(sub)) res = max(res, j - i);
        }
    }
    cout << res << endl;
}

// https://drken1215.hatenablog.com/entry/2023/11/02/095137
