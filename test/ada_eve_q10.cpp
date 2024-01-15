#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    bool f = false;
    // vector<bool> base(n, false);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 5 == 0)
        {
            f = true;
            cnt++;
        }
    }
    if (f && cnt != n)
    {
        cout << "Eve" << endl;
        return;
    }
    else
    {
        cout << "Ada" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout << "call" << endl;
        solve();
    }
    return 0;
}