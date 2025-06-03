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

    //llにも入らないので文字列
    string a,b; cin>>a>>b;
    if (a.size() > b.size()) {
        cout << "GREATER" << endl;
    } else if (a.size() < b.size()) {
        cout << "LESS" << endl;
    } else {
        //同じ桁数なら辞書
        if (a > b) {
            cout << "GREATER" << endl;
        } else if (a < b) {
            cout << "LESS" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    }
}
