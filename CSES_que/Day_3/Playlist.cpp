#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *list = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    int ans = 0;

    set<int> s;
    map<int, int> freq;

    int size = s.size();
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        s.insert(list[i]);
        freq[list[i]]++;
        if ((int)s.size() == size)
        {
            ans = max(ans, (int)s.size());
            while (start < i && freq[list[i]] != 1)
            {
                if (list[start] != list[i])
                {
                    s.erase(list[start]);
                }
                freq[list[start]]--;
                start++;
            }
        }
        size = s.size();
    }
    cout << max(ans, (int)s.size());

    return 0;
}