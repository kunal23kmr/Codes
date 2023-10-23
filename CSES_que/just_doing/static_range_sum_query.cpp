#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    ll arr[200009];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
    return 0;
}