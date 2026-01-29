#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

struct SegmentTree
{
    int n;
    vector<ll> data;

    SegmentTree(int N = 0) { init(N); }
    void init(int N)
    {
        n = 1;
        while (n < N)
            n <<= 1;
        data.assign(2 * n, 0);
    }

    void build(const vector<ll> &a)
    {
        init((int)a.size());
        for (int i = 0; i < (int)a.size(); ++i)
            data[n + i] = a[i];
        for (int i = n - 1; i >= 1; --i)
            data[i] = data[i << 1] + data[i << 1 | 1];
    }

    void update(int idx, ll val)
    {
        int i = n + idx;
        data[i] = val;
        while (i > 1)
        {
            i >>= 1;
            data[i] = data[i << 1] + data[i << 1 | 1];
        }
    }
    ll query(int l, int r) const { return inner_query(l, r, 1, 0, n); }

private:
    ll inner_query(int l, int r, int i, int il, int ir) const
    {
        if (r <= il || ir <= l)
            return 0;
        if (l <= il && ir <= r)
            return data[i];
        int m = (il + ir) / 2;
        return inner_query(l, r, i << 1, il, m) + inner_query(l, r, i << 1 | 1, m, ir);
    }
};
// https://trap.jp/post/2356/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    SegmentTree seg;
    seg.build(A);
    while (Q--)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            int x;
            cin >> x;
            x--;
            swap(A[x], A[x + 1]);
            seg.update(x, A[x]);
            seg.update(x + 1, A[x + 1]);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            cout << seg.query(l, r) << endl;
        }
    }
}
