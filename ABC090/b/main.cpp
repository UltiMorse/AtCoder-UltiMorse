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

    int a,b; cin>>a>>b;
    int cnt = 0;
    for (int i = a; i <= b; ++i) {
        int x = i % 10; // 一桁
        int y = i / 10000 % 10; // 五桁
        int z = i / 10 % 10; // 二桁
        int w = i / 1000 % 10; // 四桁
        if (x == y && z == w) {
            cnt++;
        }
    }
    cout << cnt <<endl;
}
