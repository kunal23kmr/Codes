#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(set<int> st, int n)
{
    int k = *st.begin();
    int ans = 0;
    while (k <= n / 2 && !st.empty())
    {
        for (int i = k; i <= n; i += k)
        {
            if (st.find(i) == st.end())
            {
                st.insert(i);
            }
            else
            {
                st.erase(i);
            }
        }
        k = *st.begin();
        ans++;
    }
    ans += (int)st.size();
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t, t1;

    cin >> t;
    t1 = t;
    while (t--)
    {
        int n, q;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> m;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int k1;
            cin >> k1;
            m[k1]++;
        }
        for (auto i : m)
        {
            int k = i.first;
            int c = i.second;
            for (int j = k; j <= n; j += k)
            {
                if (c % 2 != 0)
                {
                    if (s[j - 1] == '0')
                    {
                        s[j - 1] = '1';
                    }
                    else
                    {
                        s[j - 1] = '0';
                    }
                }
            }
        }
        set<int> st, st1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                st.insert(i + 1);
            }
            else
            {
                st1.insert(i + 1);
            }
        }

        int k4 = solve(st, n);
        int k3 = solve(st1, n);
        k3 += 1;
        int ans = min(k4, k3);
        cout << "Case #" << t1 - t << ": ";
        cout << ans << endl;
    }
    return 0;
}