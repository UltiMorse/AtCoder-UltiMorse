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
    string s; cin >> s;
    int left = 0, right = 0;
    rep(i,N) {
        if (s[i] == '|') {
            left = i;
            break; // 忘れかけた
        }
    }
    rrep(i,N) {
        if (s[i] == '|') {
            right = i;
            break;
        }
    }
    for (int j = left; j <= right; ++j) {
        if (s[j] == '*') {
            cout << "in" << endl;
            return 0;
        } 
    }
    cout << "out" << endl;
    return 0;
}
