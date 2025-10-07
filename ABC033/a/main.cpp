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

    int n; cin >> n;
    if (n == 0000 || n == 1111 || n == 2222 || n == 3333 || n == 4444 || n == 5555 || n == 6666 || n == 7777 || n == 8888 || n == 9999) {
        cout << "SAME" << '\n';
        return 0;
    }
    cout << "DIFFERENT" << '\n';
    return 0;
}
