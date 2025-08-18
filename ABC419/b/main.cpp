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

    int Q; cin >> Q;
    vector<int> v;
    for (int i = 0; i < Q; ++i) {
        int c; cin >> c;
        if (c==1) {
            int x; cin >> x;
            v.push_back(x);
        } else {
            int min_num = *min_element(v.begin(), v.end());
            auto ite = find(v.begin(), v.end(), min_num);
            v.erase(ite);
            cout << min_num << endl;
        }
    }
    return 0;
}
