#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int s, k, d;
        cin >> s >> d >> k;
        int bun = s * 2 + d * 2;
        int chess = s + 2 * d;
        // int patty = chess;
        if (bun > k && chess >= k)
        {
            cout << "Case #" << i << ": "
                 << "YES" << endl;
        }
        else
        {
            cout << "Case #" << i << ": "
                 << "NO" << endl;
        }
        i++;
    }

    return 0;
}