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
        string s;
        cin >> s;
        string a = "";
        while (!s.empty())
        {
            a += s.front();
            s.erase(s.begin());
            if (!s.empty())
            {
                if (s.front() != '0')
                {
                    int x = stoi(a);
                    int y = stoi(s);
                    if (x < y && x > 0)
                    {
                        cout << x << " " << y << endl;
                        break;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}