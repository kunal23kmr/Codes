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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mini = *(min_element(v.begin(), v.end()));
        int s = accumulate(v.begin(), v.end(), 0);
        cout << (s - mini * n)<<endl;
    }
    return 0;
}