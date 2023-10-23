#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &b : a)
        {
            cin >> b;
        }
        vector<int> v2(n + 1, 0);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }

        // O(n^2).
        // for (int i = 0; i < n; i++)
        // {
        //     int x = a[i];
        //     if (m.find(x) != m.end())
        //     {
        //         while (x <= n)
        //         {
        //             v2[x]++;
        //             x += a[i];
        //         }
        //     }
        // }

        // O(n.Log(n)).
        for (auto it : m)
        {
            int x = it.first;
            int y = it.second;

            while (x <= n)
            {
                v2[x] += y;
                x += it.first;
            }
        }

        int maxi = 0;

        for (int i = 1; i <= n; i++)
        {
            maxi = max(maxi, v2[i]);
        }
        cout << maxi << endl
             << endl;
    }
    return 0;
}