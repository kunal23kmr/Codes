#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        n--;

        ll ans = (n * (n + 1) * ((2 * n) + 1)) / 6;
        // ll x = (n / 2) * ((n / 2) + 1);
        // cout << ans << endl;
        cout << ans + (n + 1) * (n + 2)
             << endl
             << endl;
    }
    return 0;
}