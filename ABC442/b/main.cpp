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

    int sound = 0;
    bool playing = false;
    rep(i, Q) {
        int A; cin >> A;
        if (A == 1) {
            sound++;
        } else if (A == 2) {
            if (sound >= 1) {
                sound--;
            }
        } else if (A == 3) {
            playing = !playing;
        }

        if (playing && sound >= 3) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
