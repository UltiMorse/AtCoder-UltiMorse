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

    string s; cin >> s;
    if (s[2] == '8') {
        s[2] = '1';
        if (s[0] == '1') {
            s[0] = '2';
        } else if (s[0] == '2') {
            s[0] = '3';
        } else if (s[0] == '3') {
            s[0] = '4';
        } else if (s[0] == '4') {
            s[0] = '5';
        } else if (s[0] == '5') {
            s[0] = '6';
        } else if (s[0] == '6') {
            s[0] = '7';
        } else if (s[0] == '7') {
            s[0] = '8';
        }
    } else {
        if (s[2] == '1') {
            s[2] = '2';
        } else if (s[2] == '2') {
            s[2] = '3';
        } else if (s[2] == '3') {
            s[2] = '4';
        } else if (s[2] == '4') {
            s[2] = '5';
        } else if (s[2] == '5') {
            s[2] = '6';
        } else if (s[2] == '6') {
            s[2] = '7';
        } else if (s[2] == '7') {
            s[2] = '8';
        }
    }
    cout << s << endl;
    return 0;
}

// 文字列　S[0] += 1;こんな感じでかけるらしい。
// scanfもいいと思う。