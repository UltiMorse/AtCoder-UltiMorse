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

    int n; cin>>n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    rep(i,n-1) {
        cout << a[i] << " ";
        int dif = a[i+1] - a[i];
        if (dif > 1) {
            rep(j,dif-1) {
                cout << a[i] + j + 1 << " ";
            }
        } else if (dif < -1){
            rep(j, -dif - 1) {
                cout << a[i] - j - 1 << " ";
            }
        }
    }
    cout << a[n-1] << endl;
}

// 解説より高速では！！（逐次出力しただけ）
