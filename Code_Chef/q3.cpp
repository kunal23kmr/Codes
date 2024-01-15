#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define debug1(x) cout << #x << ": " << x << endl
#define debug2(x, y) cout << #x << ": " << x << " , " << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << " , " << #y << ": " << y << " , " << #z << ": " << z << endl
#define YES cout << "YES";
#define NO cout << "NO";
#define Yes cout << "Yes";
#define No cout << "No";
#define vli vector<long long int>
#define vvi vector<vector<int>>
#define vvli vector<vector<long long>>
#define rsort(v) sort(v.rbegin(), v.rend())
#define dsort(v) sort(v.begin(), v.end())
#define rep(n) for (int i = 0; i < n; i++)
#define repa(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define endl '\n'

long long sqb(long long x)
{
    long long low = 0;
    long long high = x;

    while (low < high)
    {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return low -1;
}

void solve()
{
    ll n;
    cin >> n;
    ll sq = sqb(n);
    if (n % 2 == 0)
    {
        cout << sq / 2 << endl;
    }
    else
    {
        if (sq % 2 == 0)
        {
            cout << sq / 2 << endl;
        }
        else
        {
            cout << (sq) / 2 + 1 << endl;
        }
    }
}

int main()
{
    fastio int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}