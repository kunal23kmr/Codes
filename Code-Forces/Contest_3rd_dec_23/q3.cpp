#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

int fun(vector<int> &diff)
{
    int ans = diff[0];
    for (int i = 1; i < diff.size(); i++)
    {
        ans = __gcd(ans, diff[i]);
    }
    return ans;
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            vector<int> diff;
            for (int i = 0; i < n - 1; i++)
            {
                diff.push_back(v[i + 1] - v[i]);
            }
            int gg = fun(diff);
            int is_blank = (v.back() - v[0]) / gg;
            if (is_blank != n)
            {
                int a = v.back();
                for (int i = n - 1; i >= 0; i--)
                {
                    if (a != v[i])
                    {
                        break;
                    }
                    else
                    {
                        a -= gg;
                    }
                }
                ll ans = 0;
                for (int i = 0; i < n; i++)
                {
                    ans += (v.back() - v[i]) / gg;
                }
                cout << ans + (v.back() - a) / gg << endl;
            }
            else
            {
                int a = v.back() + gg;
                ll ans = 0;
                for (int i = 0; i < n; i++)
                {
                    ans += (a - v[i]) / gg;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}