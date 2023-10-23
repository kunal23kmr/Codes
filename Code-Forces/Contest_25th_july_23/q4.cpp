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
        vector<long long int> v(n, 0);
        vector<int> a(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        bool f = false;
        for (int i = 1; i < n - 2; i++)
        {
            long long int x = v[i] - v[i - 1];
            if (x < n)
                a[x]++;
            else
                f = true;
        }
        if (f)
        {
            cout << "NO" << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                cnt++;
            }
            if (a[i] > 1)
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            continue;
            cout << "NO" << endl;
        }
        if (cnt + 2 == n)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}