#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int tri_fib(int x) {
    if (x == 0) return 0;
    if (x == 1) return 0;
    if (x == 2) return 1;

    ll a = 0, b = 0, c = 1;
    ll an = 0;

    vector<ll> nums;
    for (int i = 0; i < x - 3; ++i) {
        an = a + b + c;
        a = b;
        b = c;
        c = an;
    }
    return an;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;

    ll a = 0, b = 0, c = 1;
    ll an = 0;

    vector<ll> nums;
    for (int i = 0; i < n - 3; ++i) {
        an = a + b + c;
        a = b;
        b = c;
        c = an;
        nums[i] = an % 10007;
    }

    cout << ( nums[n - 3] + nums[n - 2] + nums[n - 1] ) % 10007 << endl;
}
