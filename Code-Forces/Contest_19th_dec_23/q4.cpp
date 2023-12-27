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
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        vector<pair<int, int>> b(n);
        vector<pair<int, int>> c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        vector<pair<int, int>> a1 = {a[0], a[1], a[2]};
        vector<pair<int, int>> b1 = {b[0], b[1], b[2]};
        vector<pair<int, int>> c1 = {c[0], c[1], c[2]};
        int ans = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a1[i].second != b1[j].second && a1[i].second != c1[k].second && b1[j].second != c1[k].second)
                    {
                        ans = max(ans, a1[i].first + b1[j].first + c1[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}