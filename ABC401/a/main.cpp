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

    int s; cin >> s;
    if (200 <= s && s <= 299) {
        cout << "Success" << '\n';
        return 0;
    } else {
        cout << "Failure" << '\n';
        return 0;
    }
}
