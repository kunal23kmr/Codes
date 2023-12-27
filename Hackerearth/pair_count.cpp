#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long

int main()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> even;
    vector<ll> odd;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a % 2 == 0)
        {
            even.push_back(a);
        }
        else
        {
            odd.push_back(a);
        }
    }

    long long int ans = 0;

    for (int i = 0; i < even.size(); i++)
    {
        ll low = l - even[i];
        ll up = r - even[i];

        auto i1 = lower_bound(odd.begin(), odd.end(), low) - odd.begin();
        auto i2 = upper_bound(odd.begin(), odd.end(), up) - odd.begin();

        ans += i2 - i1;
    }
    cout << ans;

    return 0;
}