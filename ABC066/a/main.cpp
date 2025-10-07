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

    int a, b, c; cin >> a >> b >> c;
    int sum1 = a + b;
    int sum2 = b + c;
    int sum3 = c + a;
    int min_sum = min({sum1, sum2, sum3});
    cout << min_sum << '\n';
    return 0;
}
