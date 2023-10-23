#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        // int j = -1;
        int ans = 0;
        int cnt = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(v[i] - v[i + 1]) <= k)
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        cout << n - ans-1 << endl;
    }
    return 0;
}