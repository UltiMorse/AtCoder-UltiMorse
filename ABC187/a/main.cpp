#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int S(string n) {
    return (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B; cin >> A >> B;
    cout << max(S(A), S(B)) << endl;
}
