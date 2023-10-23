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
        int m, a, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        int ans = 0;
        m -= (min(m / k, ak) * k);
        if (m > 0)
        {
            a = m;
            m -= min(m, a1);
        }
        if (m > 0)
        {
            ans += (m / k);
            m = (m % k);
        }

        if (m > 0)
        {
            if ((k - m) <= min(a, a1))
            {
                ans++;
                m = 0;
            }
            if (m > 0)
                ans += m;
        }
        cout << ans << endl;
    }
    return 0;
}