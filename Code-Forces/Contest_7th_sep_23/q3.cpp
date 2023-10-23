#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long

// int gcd(int a, int b)
// {
//     if (a == b)
//         return a;
//     if (a < b)
//     {
//         return gcd(b, a);
//     }
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// int lcm(int a, int b)
// {
//     ll x = a * b;
//     x = x / gcd(a, b);
//     return int(x);
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x, y;
        x = y = b / 2;
        if (x != 1 && (x + y >= a))
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        cout << endl;
        // 4th kr diya
        //  ll n, x, y;
        //  cin >> n >> x >> y;
        //  ll r = n / lcm(x, y);
        //  ll ans = 0;
        //  ll a = (n / x) - r;
        //  ll b = (n / y) - r;
        //  ans += ((n * (n + 1)) / 2) - (((n - a) * (n - a + 1)) / 2);
        //  ans -= ((b * (b + 1)) / 2);
        //  cout << ans << endl;
    }
    return 0;
}