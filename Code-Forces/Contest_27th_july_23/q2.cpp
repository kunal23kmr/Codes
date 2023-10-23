#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a;
        auto cmp = [](const pair<int, int> &p1, const pair<int, int> &p2)
        {
            if (p1.first == p2.first)
                return p1.second > p2.second;
            return p1.first < p2.first;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a % k)
                pq.push({(a % k), i});
            else{
                cout<<i<<" ";
            }
        }
        while (!pq.empty())
        {
            cout << pq.top().second << " ";
            pq.pop();
        }
        cout << endl
             << endl;
    }
    return 0;
}
