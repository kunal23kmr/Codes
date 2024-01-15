#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    vector<ll> pre(n + 1, 0); // Initialize pre vector with size n+1 and set all elements to 0

    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1]; // Update the prefix sum correctly
    }

    ll maxi = LLONG_MIN;

    for (int i = n-x,j=0; (j <= k) && (( i+x-j)>=0); j++)
    {
        maxi = max(2*pre[i] - pre[i+x-j], maxi);
        if(i>0){
            i--;
        }
    }

    cout << maxi << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}