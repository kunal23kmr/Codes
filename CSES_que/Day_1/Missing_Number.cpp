#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    vector<bool> v(n + 1, false);
    while (n > 1)
    {
        n--;
        cin >> a;
        v[a] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!v[i])
        {
            cout<<i;
            return 0;
        }
    }

    return 0;
}