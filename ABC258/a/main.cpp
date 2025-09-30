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

    int K; cin >> K;
    int increment = K / 60;
    int minute = K % 60;
    cout << 21 + increment << ':' << setw(2) << setfill('0') << minute << endl;
}
// setw()は知らなかった。以前一回使ったことがある気はするが。
// https://cpprefjp.github.io/reference/iomanip/setw.html
// Pythonでいうf文字列
