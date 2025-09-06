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
    
    int Y, M, D;
    // scanfを使う
    int ret = scanf("%d/%d/%d", &Y, &M, &D);
    tuple<int, int, int> cur(Y, M, D);
    tuple<int, int, int> hei(2019, 4, 30);

    if (cur <= hei) printf("Heisei\n");
    else printf("TBD\n");
}
