// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     if (v[0] == 2)
//         v[0]--;
//     if (v[n - 1] == 2)
//         v[n - 1] = 1;

//     bool f = v[0]; // zinda hai?

//     int coin = 1;
//     int i = 0, j = n - 1;
//     if (v[0] != 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (!f)
//             {
//                 coin++;
//                 if (v[i] == 2)
//                 {
//                     coin--;
//                 }
//             }
//             f = v[i];
//             cout << coin << endl;
//         }
//     }

//     if (f)
//     {
//         coin--;
//     }
//     cout << coin;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int coin = 0;
    if (v[0])
    {
        v[0] = 1;
    }
    if (v[n - 1])
    {
        v[n - 1] = 1;
    }

    int lz = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            lz = i;
            break;
        }
    }
    if (lz == -1)
    {
        cout << 1;
        exit(0);
    }

    return 0;
}