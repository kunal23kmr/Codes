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
        int a;
        ll sum = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            if (a == 1)
            {
                one++;
            }
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sum - n >= one)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}