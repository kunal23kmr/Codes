#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll lll = 1e6 + 1;
ll prime[lll] = {0};
ll modifiedArray[lll] = {0}; // Change variable name from 'k' to 'modifiedArray'

void Sieve()
{
    for (ll i = 1; i < lll; i++)
    {
        modifiedArray[i] = i; // Update variable name here as well
    }
    for (ll i = 2; i < lll; i++)
    {
        if (prime[i] == 0)
            for (ll j = i; j < lll; j += i)
            {
                prime[j] = 1;
                while (modifiedArray[j] % (i * i) == 0)
                {
                    modifiedArray[j] /= (i * i);
                }
            }
    }
}

int main()
{
    ll t;
    cin >> t;
    Sieve();
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[modifiedArray[a[i]]]++; // Update variable name here as well
        }
        ll ans = 0;
        for (auto i : mp)
        {
            ans += ((i.second - 1) * i.second) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
