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
    int a, b;
    a = N / 16; b = N % 16;

    if (a <= 9) {
        cout << a;
    } else {
        cout << (char)('A' + a - 10);
    }

    if (b <= 9) {
        cout << b;
    } else {
        cout << (char)('A' + b - 10);
    }
}
