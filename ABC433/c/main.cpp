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

    string s;
    cin >> s;
    int N = s.size();

    vector<int> cnt(N);
    cnt[N - 1] = 1;
    for (int i = N - 2; i >= 0; --i)
    {
        if (s[i] == s[i + 1])
            cnt[i] = cnt[i + 1] + 1;
        else
            cnt[i] = 1;
    }

    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 1; i + 2 * j <= N; ++j)
        {
            int a = s[i] - '0';
            int b = s[i + j] - '0';
            if (cnt[i] >= j && cnt[i + j] >= j && b == a + 1)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
