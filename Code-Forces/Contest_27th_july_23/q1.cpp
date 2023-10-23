#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        if (b <= (c + h))
        {
            cout << (2 * b - 1) << endl;
        }
        else if (b > (c + h))
        {
            cout << (2 * (c + h) + 1) << endl;
        }
        cout << endl;
    }
    return 0;
}