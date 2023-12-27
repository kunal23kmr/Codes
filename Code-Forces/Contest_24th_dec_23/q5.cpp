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
        int n, k;
        cin >> n >> k;
        // if (!(k != 0 || k != n || (k * k) != n))
        // {
        //     cout << "No" << endl;
        //     continue;
        // }

        if (k == 0)
        {
            cout << "Yes" << endl;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << 0 << " ";
                }
                cout << endl;
            }
        }
        else if (n == k)
        {
            cout << "Yes" << endl;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        cout << 1 << " ";
                    }
                    else
                    {
                        cout << 0 << " ";
                    }
                }
                cout << endl;
            }
        }
        else if (k == (n * n))
        {
            cout << "Yes" << endl;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << 1 << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}