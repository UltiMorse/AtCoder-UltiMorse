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

    char s1, s2, s3; cin >> s1 >> s2 >> s3;
    // 場合分けけっこうむず？
    if (s1 != s2) {
        cout << "A" << endl;
    } else if (s1 == s3) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
    return 0;
}
