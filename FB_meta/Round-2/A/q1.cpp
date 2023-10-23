#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ccnt;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis)
{
    if (i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j] == 'B')
    {
        return;
    }
    else if (grid[i][j] == '.')
    {
        if (!vis[i][j])
        {
            ccnt++;
            vis[i][j] = 1;
        }
        return;
    }
    grid[i][j] = 'B';
    dfs(i + 1, j, grid, vis);
    dfs(i - 1, j, grid, vis);
    dfs(i, j + 1, grid, vis);
    dfs(i, j - 1, grid, vis);
}

void solve(int t, int t1)
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> v(r, vector<char>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ccnt = 0;
            if (v[i][j] == 'W')
            {
                vector<vector<bool>> vis(r, vector<bool>(c, 0));
                dfs(i, j, v, vis);
                if (ccnt <= 1)
                {
                    cout << "Case #" << t1 - t << ": "
                         << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "Case #" << t1 - t << ": "
         << "NO" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t, t1;
    cin >> t;
    t1 = t;
    while (t--)
    {
        solve(t, t1);
    }
    return 0;
}