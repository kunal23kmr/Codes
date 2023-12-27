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
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        map<int, int> m;
        for (auto i : c)
        {
            m[b[i]]++;
        }
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (m.find(a[i]) != m.end())
            {
                ans += m[a[i]];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
