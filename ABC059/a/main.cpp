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

    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    char c1 = s1[0], c2 = s2[0], c3 = s3[0];
    if (islower(c1)) c1 = c1 - 32;
    if (islower(c2)) c2 = c2 - 32;
    if (islower(c3)) c3 = c3 - 32;
    cout << c1 << c2 << c3 << '\n';
    return 0;
}
