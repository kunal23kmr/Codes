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
        vector<ll> v(n);
        int p = 0, ne = 0;
        bool f = false;
        for (auto &i : v)
        {
            cin >> i;
            if (i == 0)
            {
                f = true;
            }
            else if (i > 0)
            {
                p++;
            }
            else
            {
                ne++;
            }
        }
        if (f)
        {
            cout << 0 << endl;
            continue;
        }
        if (ne == 0)
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
            continue;
        }
        if (ne % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                cout << 1 << endl;
                cout << i + 1 << " " << 0 << endl;
                break;
            }
        }
    }
    return 0;
}