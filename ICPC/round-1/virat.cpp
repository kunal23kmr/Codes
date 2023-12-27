#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int M = 1e9 + 7;
const int i6 = 166666668;

int dp[151][61][11][101][3];

void madd(int &a, int b)
{
    if (a < 0)
        a += M;
    a += b;
    if (a >= M)
        a -= M;
}

int f(int n, int b, int w, int x, int s)
{
    if (n == 0)
        return x == 0;

    if (b == 0 || w == 0)
        return 0;

    if (dp[n][b][w][x][s] != -1)
        return dp[n][b][w][x][s];

    int ans = 0;

    for (int i : {6, 4, 3, 2, 1})
    {
        bool s2s = (b % 6 == 1 && (i == 1 || i == 3)) || (b % 6 != 1 && i != 1 && i != 3);
        if (s == 1)
            madd(ans, f(max(0LL, n - i), b - 1, w, max(0LL, x - i), s2s));
        else
            madd(ans, f(max(0LL, n - i), b - 1, w, x, s == 2 ? 2 : !s2s));
    }

    if (s == 0)
        madd(ans, f(n, b - 1, w - 1, x, b % 6 == 1));
    else if (s == 1)
    {
        if (x == 0)
            madd(ans, f(n, b - 1, w - 1, x, 2));
    }
    else
        madd(ans, f(n, b - 1, w - 1, x, 2));

    return dp[n][b][w][x][s] = ans * i6 % M;
}

void solve()
{
    int n, b, w, x;
    cin >> n >> b >> w >> x;
    cout << f(n, b, 10 - w, 100 - x, 1) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    int t;
    cin >> t;
    while (t--)
        solve();
}