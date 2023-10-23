#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (ll i = 0, j; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
    }
    v.push_back(m);
    ll ans = 0;
    if (v[n] == v[n - 1])
    {
        ans++;
    }
    for (ll i = 0; i < n; i++)
    {
        ans += v[i + 1] - v[i];
    }
    cout << ans % MOD;
    return 0;
}