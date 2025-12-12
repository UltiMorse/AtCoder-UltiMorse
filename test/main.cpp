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

    int N; cin >> N;
    int odd_count_sum = 1;
    int all_patern = 1;

    for (int i = 0; i < N; ++i) {
        int a; cin >> a;
        all_patern *= 3;
        if (a % 2 == 0) {
            odd_count_sum *= 2;
        }
    }

    cout << all_patern - odd_count_sum << endl;
    return 0;
}
