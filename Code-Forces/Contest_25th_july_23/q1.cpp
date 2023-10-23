#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int x, r;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            r = abs(H - x) / k;
            if (((abs(H - x) % k) == 0 )&& (H != x) && r < m)
            {
                // cout<<x<<"w     "<<r<<endl;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}