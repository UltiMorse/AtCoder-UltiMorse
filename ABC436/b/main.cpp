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
    vector<vector<int>> A(N, vector<int>(N, 0));

    int r = 0;
    int c = (N - 1) / 2;
    for (int i = 1; i <= N * N; ++i)
    {
        A[r][c] = i;
        int a = (r - 1 + N) % N;
        int b = (c + 1) % N;

        if (A[a][b] == 0)
        {
            r = a;
            c = b;
        }
        else
        {
            r = (r + 1) % N;
        }
    }
    rep(i, N)
    {
        rep(j, N)
        {
            cout << A[i][j];
            if (j != N - 1)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
