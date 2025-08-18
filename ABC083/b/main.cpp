#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int calc(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10; // 右から1ケタずつ
        n /= 10;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, A, B;
    cin >> N >> A >> B;

    int res = 0;
    for (int n = 1; n <= N; n++) {
        int wa = calc(n);
        if (wa >= A && wa <= B) res += n;
    }
    cout << res << endl;
}
// 解説参考
