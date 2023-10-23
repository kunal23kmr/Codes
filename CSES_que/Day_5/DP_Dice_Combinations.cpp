#include <bits/stdc++.h>
using namespace std;

// NHI HUA]
int mod = 1000000007;
int ans = 0;

int solve(int val, int sum, vector<int> &dp)
{
    if (sum < 0)
    {
        return 0;
    }
    else if (sum == 0)
    {
        return 1;
    }
    if (dp[sum] != -1)
    {
        return dp[sum];
    }
    long long ans = 0;
    for (int i = 1; i < 7; i++)
    {
        ans += solve(i, sum - i, dp);
    }

    return dp[sum] = (ans % mod);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    dp[0] = solve(0, n, dp);
    cout << dp[0];
    return 0;
}