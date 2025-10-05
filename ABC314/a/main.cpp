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

    string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int N;
    cin >> N;
    for (int i = 0; i < N + 2; ++i) // 整数部と.
        cout << pi[i];
    cout << endl;
    return 0;
}
