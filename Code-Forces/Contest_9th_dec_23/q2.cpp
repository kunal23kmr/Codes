#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
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
        map<ll, ll> m; // fre,sum
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v[i] = a;
            m[a] += a;
        }
        ll pre = 0;
        for (auto &a : m)
        {
            a.second += pre;
            pre = a.second;
        }
        vector<ll> vv = v;
        sort(vv.begin(), vv.end());

        for (int i = 0; i < n; i++)
        {
            ll ans = upper_bound(vv.begin(), vv.end(), m[v[i]]) - vv.begin();
            cout << ans - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}