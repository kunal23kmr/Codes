#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] -= 1;
        }
        map<long long, long long> dic;
        vector<long long> pre(n + 1);
        pre[0] = a[0];
        for (long long i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        long long s = 0;
        dic[0]++;
        vector<long long> ans(n + 1);
        for (long long i = 0; i < n; i++)
        {
            s += dic[pre[i]];
            ans[i + 1] = s;
            dic[pre[i]]++;
        }
        for (long long i = 0; i < q; i++)
        {
            long long x;
            cin >> x;
            cout << ans[x] << endl;
        }
    }
    return 0;
}