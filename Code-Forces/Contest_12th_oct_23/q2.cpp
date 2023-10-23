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
        ll a, b, c;
        cin >> a >> b >> c;
        ll mini = min({a, b, c});
        // a -= mini;
        // b -= mini;
        // c -= mini;
        if ((a % mini == 0) && (b % mini == 0) && (c % mini == 0) && ((a + b + c) / mini) > 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}