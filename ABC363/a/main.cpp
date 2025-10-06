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

    int R; cin >> R;

    if (R >= 1 && R <= 99) {
        cout << 100 - R << endl;
    } else if (R >= 100 && R <= 199) {
        cout << 200 - R << endl;
    } else if (R >= 200 && R <= 299) {
        cout << 300 - R << endl;
    }
    return 0;
}
