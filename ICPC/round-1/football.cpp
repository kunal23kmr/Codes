#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll min(ll a, ll b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

ll solve(vector<ll> &pos, vector<ll> &speed, ll n, ll k)
{
    vector<vector<ll>> dp(n, vector<ll>(k + 2, -1));
    for (ll rChange = 0; rChange <= k + 1; ++rChange)
    {
        for (ll curr = n - 1; curr >= 0; --curr)
        {
            if (curr == n - 1 && rChange >= 0)
            {
                dp[curr][rChange] = 0;
            }
            else if (curr >= n || rChange < 0)
            {
                dp[curr][rChange] = LLONG_MAX;
            }
            else
            {
                ll mini = LLONG_MAX;
                for (ll next = curr + 1; next < n; next++)
                {
                    ll time = speed[curr] * abs(pos[curr] - pos[next]);
                    ll nextTime = dp[next][rChange - (pos[next] < pos[curr])];
                    if (nextTime != LLONG_MAX)
                    {
                        mini = min(mini, time + nextTime);
                    }
                }
                dp[curr][rChange] = mini;
            }
        }
    }
    return dp[0][k + 1];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> pos(n), speed(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> pos[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> speed[i];
        }
        ll result = solve(pos, speed, n, k);
        cout << result << endl;
    }
    return 0;
}