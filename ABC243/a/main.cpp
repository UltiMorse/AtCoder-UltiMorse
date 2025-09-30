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

    int V, A, B, C; cin >> V >> A >> B >> C;

    while (true) {
        if (V < A) {
            cout << "F" << endl;
            return 0;
        } else {
            V -= A;
        }
        if (V < B) {
            cout << "M" << endl;
            return 0;
        } else {
            V -= B;
        }
        if (V < C) {
            cout << "T" << endl;
            return 0;
        } else {
            V -= C;
        }
    }
}
