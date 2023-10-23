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
        map<long int, int> c1, c2, c3, c4;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            c1[y - x]++;
            c2[y + x]++;
            c3[y]++;
            c4[x]++;
        }
        long long int ans = 0;
        long long int r;
        for (auto it : c1)
        {
            r = it.second;
            ans += (r * (r - 1));
        }

        for (auto it : c2)
        {
            r = it.second;
            ans += (r * (r - 1));
        }

        for (auto it : c3)
        {
            r = it.second;
            ans += (r * (r - 1));
        }

        for (auto it : c4)
        {
            r = it.second;
            ans += (r * (r - 1));
        }

        cout << ans << endl
             << endl;
    }
    return 0;
}