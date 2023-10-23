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
        int ans = 0, a;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (i == a)
                ans++;
        }
        cout << (ans + 1) / 2 << endl;
    }
    return 0;
}