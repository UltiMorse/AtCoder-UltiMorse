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

    int a, b, c;
    int acnt = 1;
    int bcnt = 1;
    int ccnt = 1;

    cin >> a >> b >> c;
    if (a < b) acnt++;
    if (a < c) acnt++;
    if (b < a) bcnt++;
    if (b < c) bcnt++;
    if (c < a) ccnt++;
    if (c < b) ccnt++;
    cout << acnt << '\n';
    cout << bcnt << '\n';
    cout << ccnt << '\n';
    return 0;
}
