#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    if (n != m)
    {
        cout << "You will lose" << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == t[i] ||
            (s[i] == '@' &&
             (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r')) ||
            (t[i] == '@' &&
             (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r')))
        {
            continue;
        }
        else
        {
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
}

// drkenさんの解説
// ハードコーディングではなく、setを使っている。

// #include <bits/stdc++.h>
// using namespace std;
// set<char> atcoder({'a', 't', 'c', 'o', 'd', 'e', 'r'});

// int main() {
//     string S, T;
//     cin >> S >> T;

//     bool res = true;
//     for (int i = 0; i < S.size(); i++) {
//         if (S[i] == T[i]) continue;
//         if (S[i] == '@' && atcoder.count(T[i])) continue;
//         if (T[i] == '@' && atcoder.count(S[i])) continue;
//         res = false;
//     }
//     if (res) cout << "You can win" << endl;
//     else cout << "You will lose" << endl;
// }