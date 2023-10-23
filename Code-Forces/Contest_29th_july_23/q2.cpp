#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long

set<ll> findPrimeFactors(ll number)
{
    set<ll> primeFactors;
    while ((number != 0) && (number % 2 == 0))
    {
        primeFactors.insert(2);
        number /= 2;
    }
    for (ll i = 3; i * i <= number; i += 2)
    {
        while ((number != 0) && (number % i == 0))
        {
            primeFactors.insert(i);
            number /= i;
        }
    }
    if (number > 2)
    {
        primeFactors.insert(number);
    }

    return primeFactors;
}

int solve(ll n, ll i)
{
    if (i > n)
    {
        return 0;
    }
    if ((n % i) != 0)
        return 1;
    int ans = 1;
    ll a = i - 1;
    while (a > 0 && ((n % a) == 0))
    {
        ans++;
        a--;
    }
    ll j = i + 1;
    while ((n % j) == 0)
    {
        ans++;
        j++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    set<ll> s = findPrimeFactors(1e18);
    s.insert(1);
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 0;
        for (auto i : s)
        {
            // cout << i << " oi" << endl;
            ans = max(ans, solve(n, i));
        }
        cout << ans << endl;
    }
    return 0;
}