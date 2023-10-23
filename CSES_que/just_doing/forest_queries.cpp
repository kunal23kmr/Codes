#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int arr[1002][1002];
int main()
{

    memset(arr, 0, sizeof(arr));

    // char a;
    int n;
    cin >> n;
    int q;
    cin >> q;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            // getchar(cin,a);
            if (s[j-1] == '.')
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
            arr[i][j] += (arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1]);
        }
    }
    int x1, y1, x2, y2;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < q; i++)
    {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << (arr[y2][x2] - arr[y2][x1-1] - arr[y1-1][x2] + arr[y1-1][x1-1]) << endl;
    }

    return 0;
}