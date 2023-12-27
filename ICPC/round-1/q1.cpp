
// श्री गणेशायनमः

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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int mini = v[k];
        for (int i = 0; i < k - 1; i++)
        {
            mini += v[n - 1 - i];
        }
        cout << mini << " ";
        int maxi = 0;
        for (int i = 0; i < k; i++)
        {
            maxi += v[2 * i + 1];
        }
        cout << maxi << endl;
    }
    return 0;
}