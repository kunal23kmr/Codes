#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    dp[1][0] = 1; 

    for (int j = 1; j <= x; ++j)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int k = 1; k <= n; ++k)
            {
                if (k != i)
                {
                    dp[i][j] = (dp[i][j] + dp[k][j - 1]) % MOD;
                }
            }
        }
    }

    int answer = 0;
    for (int i = 2; i <= n; ++i)
    {
        answer = (answer + dp[i][x - 1]) % MOD;
    }

    cout << answer << endl;

    return 0;
}
