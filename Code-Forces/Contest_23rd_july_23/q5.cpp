#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll min(int a, ll b)
{
    return a < b ? a : b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;

        int l = 0;
        ll ans = 0;
        int a;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }

        if (v[0] == k)
        {
            v[0] = 0;
        }
        if (v[n - 1] == k)
        {
            v[n - 1] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if ((v[i] == k))
            {
                if ((v[i - 1] + v[i + 1]) > k)
                {
                    v[i] = k;
                }
                else
                {
                    v[i] = 0;
                }
            }
            if (v[i] >= l)
            {
                ans += v[i] - l;
            }
            l = v[i];
        }
        cout << ans << endl;
    }
    return 0;
}