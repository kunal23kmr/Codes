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
        int a;
        for (a = n; a > k + 1; a--)
        {
            cout << a << " ";
        }

        for (int i = 1; i <= (k + 1); i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}