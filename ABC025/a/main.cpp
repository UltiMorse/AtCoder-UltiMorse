#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a, b;
    int N;
    cin >> s >> N;
    
    if (1 <= N && N <= 5) {
        a = s[0];
    } else if (6 <= N && N <= 10) {
        a = s[1];
    } else if (11 <= N && N <= 15) {
        a = s[2];
    } else if (16 <= N && N <= 20) {
        a = s[3];
    } else if (21 <= N && N <= 25) {
        a = s[4];
    }
    
    if (N % 5 == 0) {
        b = s[4];
    } else if (N % 5 == 1) {
        b = s[0];
    } else if (N % 5 == 2) {
        b = s[1];
    } else if (N % 5 == 3) {
        b = s[2];
    } else if (N % 5 == 4) {
        b = s[3];
    }

    cout << a << b << '\n';
    return 0;
}
