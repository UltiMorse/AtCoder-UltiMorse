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
    for (int i = N; i <= 919; ++i) {
        int a = i / 100; // 100の位
        int b = (i / 10) % 10; // 10の位
        int c = i % 10; // 1の位

        if (a*b == c) {
            cout << i << endl;
            return 0;
        }
    }
    return -1;
}
