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

    string s; cin >> s;
    int n = s.size();
    vector<string> v(n);

    for (int i = 0; i < n; ++i) {
        v[i] = s.substr(i, n - i) + s.substr(0, i); // iからn-i-1までと0からi-1までを足す。
    }
    cout << *min_element(v.begin(), v.end()) << endl; // min_elementは最小値のイテレーターを返すので、*min_elementでその一の値を返す。
    cout << *max_element(v.begin(), v.end()) << endl; // デリファレンス演算子
}
