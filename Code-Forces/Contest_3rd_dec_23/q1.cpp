#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int z = 0, o = 0, n;
        cin >> n;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        if (z == 0)
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