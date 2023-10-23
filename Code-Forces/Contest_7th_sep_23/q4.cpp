#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long

ll gcd(ll a, ll b)
{
    if (a == b)
        return a;
    if (a < b)
    {
        return gcd(b, a);
    }
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    ll x = a * b;
    x = x / gcd(a, b);
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll r = n / lcm(x, y);
        ll ans = 0;
        ll a = (n / x) - r;
        ll b = (n / y) - r;
        ans += ((n * (n + 1)) / 2) - (((n - a) * (n - a + 1)) / 2);
        ans -= ((b * (b + 1)) / 2);
        cout << ans << endl;
    }
    return 0;
}