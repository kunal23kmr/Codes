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
        int a[n];
        cin >> a[0];
        int mini = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            mini = min(mini, a[i] - a[i - 1]);
        }
        if (mini < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (mini / 2) + 1 << endl;
        }
    }
    return 0;
}