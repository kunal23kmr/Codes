#include <bits/stdc++.h>
using namespace std;

// #define MOD 1e9 + 7
// #define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b;
        cin >> a >> b;
        int s;
        int e;
        n--;
        bool flag = true;
        while (n>0 )
        {
            cin >> s >> e;
            if (a <= s && b <= e)
            {
                cout << -1 << endl;
                flag = false;
            }
            n--;
        }
        if (flag)
        {
            cout << a << endl;
        }
    }
    return 0;
}