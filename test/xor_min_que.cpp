#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<int> &arr, int qq, vector<vector<int>> &queries)
{
    vector<vector<int>> v(n + 1, vector<int>(32, 0));
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if ((arr[i - 1] & (1 << j)) != 0) // Fix: Use arr[i-1] instead of v[i][j]
            {
                v[i][j] = v[i - 1][j] + 1;
            }
            else
            {
                v[i][j] = v[i - 1][j];
            }
        }
    }

    for (auto q : queries)
    {
        int ind = q[0];
        int val = q[1];
        int s = ind, end = n;
        int a = -1;
        while (s <= end)
        {
            int mid = (s + end) / 2;
            vector<int> diff(32);

            for (int i = 0; i < 32; i++)
            {
                diff[i] = v[mid + 1][i] - v[s][i];
            }

            int x = 0;
            for (int i = 0; i < 32; i++)
            {
                if (diff[i] > 0)
                {
                    x += (1 << i);
                }
            }

            if (x >= val)
            {
                a = mid;
                end = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        ans.push_back(a);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
        {
            cin >> i;
        }
        int q;
        cin >> q;
        vector<vector<int>> query(q, vector<int>(2));
        for (auto &i : query)
        {
            cin >> i[0] >> i[1];
        }
        solve(n, arr, q, query);
    }

    return 0;
}
