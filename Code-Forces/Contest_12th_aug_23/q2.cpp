#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> grid(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int e;
            for (int j = 0; j < a; j++)
            {
                cin >> e;
                grid[i].push_back(e);
            }
            sort(grid[i].begin(), grid[i].end());
        }

        sort(grid.begin(), grid.end());
        ll ans = grid[0][0];
        int x = grid[0][1];
        for (int i = 1; i < grid.size(); i++)
        {
            if  (grid[i][1] < x)
            {
                ans += x;
                x = grid[i][1];
            }
            else
            {
                ans += grid[i][1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}