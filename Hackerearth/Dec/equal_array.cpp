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
        int n, m;
        cin >> n >> m;

        deque<ll> a, b;
        ll x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }

        while (!a.empty() && !b.empty())
        {
            if (a.front() == b.front())
            {
                a.pop_front();
                b.pop_front();
                continue;
            }
            else if (a.front() > b.front())
            {
                x = b.front();
                b.pop_front();
                b.front() += x;
                m--;
            }
            else
            {
                x = a.front();
                a.pop_front();
                a.front() += x;
            }
        }
        if (a.empty() && b.empty())
        {
            cout << m << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}