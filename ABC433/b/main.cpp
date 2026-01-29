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

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    for (int i = 0; i < N; ++i)
    {
        int ans = -1;
        for (int j = i - 1; j >= 0; --j)
        {
            if (A[j] > A[i])
            {
                ans = j + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}
