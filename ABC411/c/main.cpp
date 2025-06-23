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

    int N,Q; cin>>N>>Q;
    vector<int> A(Q);
    rep(i,Q) {
        cin>>A[i];
        --A[i];
    }
    vector<int> masu(N,0);
    int cnt = 0;

    rep(i,Q) {
        int idx = A[i];
        if (masu[idx]==0) {
            masu[idx]=1;
            if (masu[idx-1]==0) {
                ++cnt;
            }
        } else {
            masu[idx]=0;
            if (masu[idx+1]==0) {
                
            }
        }



    }
    cout << cnt << endl;
    
}
