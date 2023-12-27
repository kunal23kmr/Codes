#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {a[i] + b[i], i};
    }
    sort(v.rbegin(), v.rend());
    ll ans = 0;

    for (int i = 0; i < n; i += 2)
    {

        ans += a[v[i].second] - 1;
    }
    for (int i = 1; i < n; i += 2)
    {
        ans -= b[v[i].second] - 1;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}