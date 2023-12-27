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
        ll crr, pre;
        cin >> pre;
        ll ans = pre - 1;
        for (int i = 1; i < n; i++)
        {
            cin >> crr;
            if (crr > pre)
            {
                ans += crr - pre;
            }
            pre = crr;
        }
        cout << ans  << endl;
    }
    return 0;
}