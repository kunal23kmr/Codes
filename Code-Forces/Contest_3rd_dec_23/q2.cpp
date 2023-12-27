#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'
ll mod = 1e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, p, l, t;

        cin >> n >> p >> l >> t;

        ll number_of_ass = (n - 1) / 7 + 1;
        ll one_day_earning = 2 * t + l;
        if (number_of_ass % 2 == 0 && ((one_day_earning * (number_of_ass / 2)) % mod) >= p)
        {
            // cout << 1 << ": ";

            cout << n - (p + one_day_earning - 1) / one_day_earning << endl;
        }
        else if (number_of_ass % 2 != 0 && (((one_day_earning * (number_of_ass / 2)) % mod) + l + t) >= p)
        {
            if ((((one_day_earning * (number_of_ass / 2)) % mod)) >= p)
            {
                cout << n - (p + one_day_earning - 1) / one_day_earning << endl;
            }
            else
            {
                cout << n - (number_of_ass + 1) / 2 << endl;
            }
        }
        else
        {
            ll day = 0;
            if (number_of_ass % 2 == 0)
            {
                p -= (one_day_earning * (number_of_ass / 2));
                day = number_of_ass / 2;
            }
            else
            {
                p -= (one_day_earning * (number_of_ass / 2));
                day = number_of_ass / 2;
                p -= (t + l);
                day++;
            }
            day += (p + l - 1) / l;
            // cout << 2 << ": ";
            cout << n - day << endl;
        }
    }
    return 0;
}