#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll z = 200002;
void solve(vector<ll> &fibo)
{
    fibo[1] = (ll)1;
    for (ll i = 2; i < z; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    int t;
    vector<ll> fibo(z);
    solve(fibo);
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (k > z)
        {
            cout << "0" << endl;
        }
        else
        {
            ll a = fibo[k - 2];
            ll b = fibo[k - 1];
            ll ans = 0;
            for (int i = 0; i <= n; i++)
            {
                ll p = (n - a * i);
                ll y = p / b;
                if ((p % b == 0) && i <= y)
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}