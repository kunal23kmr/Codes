#include <bits/stdc++.h>
using namespace std;

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
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        int i = 1, cnt = 1;

        while (i < n && cnt < k)
        {
            if (v[i] == v[0])
            {
                cnt++;
            }
            i++;
        }
        if (i == n)
        {
            if (cnt == k)
            {
                cout << "YES" << endl;

                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        else
        {
            cnt = 0;
            while (i < n && cnt < k)
            {
                if (v[i] == v[n - 1])
                {
                    cnt++;
                }
                i++;
            }
        }

        if (cnt == k)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            if (v[0] == v[n - 1])
            {
                cout << "YES" << endl;
                continue;
            }

            cout << "NO" << endl;
            continue;
        }
    }
    return 0;
}