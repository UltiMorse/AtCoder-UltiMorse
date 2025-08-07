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
    vector<string> s(N);
    rep(i,N) cin >> s[i];

    int l; string t; bool flag;
    rep(i,N) {
		rep(j,N) {
			if (i != j) {
				t = s[i]+s[j];
				l=t.size();
				flag = true;
				rep(k,l) { 
                    if(t[k] != t[l-k-1]) { // t[l-k-1]で後ろから走査
                        flag=false;
                    }
                }
				if (flag) {
					cout<<"Yes"<<endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
