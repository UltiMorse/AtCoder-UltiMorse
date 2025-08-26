#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

bool isFullHouse(int A,int B,int C,int D,int E){
  vector<int> card={A,B,C,D,E};
  sort(card.begin(),card.end());
  if (
    card[0]==card[1] && card[1]==card[2] &&
    card[2]!=card[3] && card[3]==card[4]
  ) {
    return true;
  }
  if (
    card[0]==card[1] &&
    card[1]!=card[2] &&
    card[2]==card[3] && card[3]==card[4]
  ) {
    return true;
  }
  return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, D; cin >> A >> B >> C >> D;
    for (int E = 1; E <=13; ++E) {
        if (isFullHouse(A, B, C, D, E)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
// 解説見た
