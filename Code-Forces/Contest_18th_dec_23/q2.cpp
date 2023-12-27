#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

int solve(string s)
{
    int z = 0, o = 0;
    for (auto c : s)
    {
        if (c == '0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }

    string ans = "";
    for (auto c : s)
    {
        if ((c == '0' && o < 1) || (c == '1' && z < 1))
        {
            break;
        }
        if (c == '0' && o > 0)
        {
            ans += '1';
            o--;
        }
        else if (c == '1' && z > 0)
        {
            ans += '0';
            z--;
        }
    }
    return (s.size() - ans.size());
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << abs(solve(s)) << endl;
    }
    return 0;
}
