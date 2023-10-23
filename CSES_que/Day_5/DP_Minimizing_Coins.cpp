#include <bits/stdc++.h>
using namespace std;
int ans = INT_MAX;

void solve(int curr, int sum, vector<int> &coin, int cnt)
{
    if (curr == coin.size())
    {
        return;
    }
    else if (sum == 0)
    {
        ans = min(ans, cnt);
    }
    else if (sum > 0)
    {
        for (int i = curr; i < coin.size(); i++)
        {
            solve(i, sum - coin[curr], coin, cnt + 1);
        }
    }
}
int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    vector<int> dp(sum + 1, -1);
    solve(0,sum,coin,0);
    if(ans == INT_MAX)
    {
        cout<<-1;
        return 0;
    }
    cout << ans;

    return 0;
}


/// top-down approch--not completed :(

// #include <bits/stdc++.h>
// using namespace std;
// int ans = INT_MAX;

// int main()
// {
//     int n, sum;
//     cin >> n >> sum;
//     vector<int> coin(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coin[i];
//     }

//     vector<vector<int>> dp(n, vector<int>(sum + 1, 0));
//     for (int i = 1; i < sum + 1; i++)
//     {
//         dp[0][i] = ((i % coin[0]) == 0) ? (i / coin[0]) : (0);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < sum + 1; j++)
//         {
//             if ((j % coin[i]) != 0)
//             {
//                 if (dp[i - 1][j % coin[i]] != 0)
//                 {
//                     dp[i][j] = j / coin[i] + dp[i - 1][j % coin[i]];
//                 }else{
//                     dp[i][j] = 0;
//                 }
//             }else{
//                 dp[i][j] = j/coin[i];
//             }
//         }
//     }
//     return 0;
// }