#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    map<int, int> m;
    int a;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        m[a - i]++;
    }

    ll ans = 0;
    for (auto &it : m)
    {
        ll x = it.second;
        ans += x * (x - 1);
    }
cout<<ans;
    return 0;
}