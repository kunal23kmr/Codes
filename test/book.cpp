#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    int type;
    vector<int> v;
    v.push_back(1);

    vector<vector<int>> s;

    int last = 1;
    while (n--)
    {
        cin >> type;
        if (type == 1)
        {
            int i;
            cin >> i;
            v.push_back(last + i - 1);
            s.push_back({last, last + i - 1});
            last = last + i;
        }
        else
        {
            v.pop_back();
            last = v.back() + 1;
        }
    }

    vector<long long> ss(1e4 + 5, 0);
    for (auto &a : s)
    {
        ss[a[0]]++;
        ss[a[1] + 1]--;
    }
    for (int i = 1; i < ss.size(); i++)
    {
        ss[i] += ss[i - 1];
    }
    long long cnt = 0;
    for (auto &i : ss)
    {
        if (i > 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    fastio int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
