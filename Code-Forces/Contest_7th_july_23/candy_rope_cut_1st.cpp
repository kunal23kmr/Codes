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
        int a, b;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v[i] = a-b;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] > 0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}