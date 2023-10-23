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
        vector<int> v(n);
        vector<bool> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            b[i] = v[i] % 2;
        }
        sort(v.begin(), v.end());
        bool d = true;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] % 2) != b[i])
            {
                cout << "NO" 
                     << endl;
                d = false;
                break;
            }
        }
        if (d)
        {
            cout << "YES" 
                 << endl;
        }
    }
    return 0;
}