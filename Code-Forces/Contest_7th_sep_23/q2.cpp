#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int d, s;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> s;
            v.push_back(make_pair(d, s));
        }
        sort(v.begin(), v.end());
        int k = v[0].first + (v[0].second - 1) / 2;
        for (int i = 0; i < n; i++)
        {
            if (k > v[i].first)
            {
                k = v[i].first + min(k - v[i].first, (v[i].second - 1) / 2);
            }
            else
            {
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}