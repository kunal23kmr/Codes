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
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &i : b)
        {
            cin >> i;
        }

        ll ans = a[0];
        ll sum = 0;
        ll s_max = b[0];
        for (int i = 0; i < n && i < k; i++)
        {
            sum += a[i];
            s_max = max(s_max, b[i]);
            ans = max(ans, sum + (k - i - 1) * s_max);
        }

        cout << ans << endl;
    }
    return 0;
}
