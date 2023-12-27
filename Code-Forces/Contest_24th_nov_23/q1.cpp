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
        int x;
        cin >> x;
        int ini = 0;
        int ans = INT_MIN;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ans = max(a - ini, ans);
            ini = a;
        }
        ans = max(ans,2*(x-a));
        cout<<ans<<endl;
    }
    return 0;
}