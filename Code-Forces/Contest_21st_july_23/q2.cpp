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
        int a, b, j = 1;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a < 11)
            {
                v.push_back({b, j});
            }
            j++;
        }
        sort(v.begin(), v.end());
        cout << v[v.size() - 1][1] << endl;
    }
    return 0;
}