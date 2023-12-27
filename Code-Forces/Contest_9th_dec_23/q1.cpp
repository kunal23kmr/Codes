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
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        set<pair<int, int>> sk;
        set<pair<int, int>> sq;

        // move -x a,b
        sk.insert({xk - a, yk - b});
        sq.insert({xq - a, yq - b});

        sk.insert({xk - a, yk + b});
        sq.insert({xq - a, yq + b});

        sk.insert({xk - b, yk - a});
        sq.insert({xq - b, yq - a});

        sk.insert({xk - b, yk + a});
        sq.insert({xq - b, yq + a});

        sk.insert({xk + a, yk - b});
        sq.insert({xq + a, yq - b});

        sk.insert({xk + a, yk + b});
        sq.insert({xq + a, yq + b});

        sk.insert({xk + b, yk - a});
        sq.insert({xq + b, yq - a});

        sk.insert({xk + b, yk + a});
        sq.insert({xq + b, yq + a});
        int ans = 0;

        for (auto it = sk.begin(); it != sk.end(); ++it)
        {
            if (sq.find(*it) != sq.end())
            {
                ans++;
            }
        }

        // cout << "sk" << endl;
        // for (auto it = sk.begin(); it != sk.end(); ++it)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }

        // cout << "sq" << endl;
        // for (auto it = sq.begin(); it != sq.end(); ++it)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }

        cout << ans << endl;
            //  << endl;
    }
    return 0;
}
