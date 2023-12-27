#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    ll count = 0;
    for (auto it : s)
    {
        m[it]++;
        count += m.size();
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
