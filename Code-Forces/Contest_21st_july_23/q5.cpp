#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll c;
        cin >> c;
        vector<ll> v(n);

        ll si = 0;
        ll si2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            si += v[i];
            si2 += v[i] * v[i];
        }

        ll w = (((-si) / (2 * n)) + sqrt(((si * si) / (4 * n * n)) + ((c - si2) / (4 * n))));
        cout << w << "\n";
    }

    return 0;
}