#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int l;
    cin >> l;
    while (l--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> x(m);
            for (int j = 0; j < m; j++)
            {
                cin >> x[i];
            }
            sort(x.begin(), x.end());
            int sum = 0;
            int q = 0;
            int time = 0;
            while (q < m && time <= h)
            {
                time += x[q];
                sum = 2 * sum + x[q];
                q++;
            }
            v.push_back({q, sum});
        }
        sort(v.begin(), v.end(), comp);
        int rp = 0;
        int rpe = 0;
        int i = 0;
        int time = 0;
        int arr[3] = {15, 20, 110};
        while (i < 3)
        {
            if (time + arr[i] <= h)
            {
                rpe = 2 * rpe + arr[i];
                time += arr[i];
                rp++;
            }
            i++;
        }
        auto it = lower_bound(v.begin(), v.end(), make_pair(rp, rpe), comp) - v.begin();
        cout << "result " << it + 1 << endl;
    }
    return 0;
}