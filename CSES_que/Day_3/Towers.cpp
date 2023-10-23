#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    multiset<int> s;
    int a;
    while (n--)
    {
        cin >> a;
        auto it = s.upper_bound(a);
        if (it == s.end() || *it == a)
        {
            ans++;
            s.insert(a);
        }
        else if (*it > a)
        {
            s.erase(it);
            s.insert(a);
        }
    }
    cout<<ans;
    return 0;
}