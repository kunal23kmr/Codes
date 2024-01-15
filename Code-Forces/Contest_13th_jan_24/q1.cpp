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

void solve()
{
    int n;
    cin >> n;
    int l = 1;
    int h = 1e9;
    int type, k;
    map<int, int> m;
    m[1] = l;
    m[2] = h;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> type;
        cin >> k;
        if (type == 1)
        {
            m[1] = max(m[1], k);
        }
        else if (type == 2)
        {
            m[2] = min(m[2], k);
        }
        else
        {
            v.push_back(k);
        }
    }
    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] > m[2])
        {
            v.pop_back();
        }
        else
        {
            break;
        }
    }
    reverse(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] < m[1])
        {
            v.pop_back();
        }
        else
        {
            break;
        }
    }
    int r = set<int>(v.begin(), v.end()).size();
    cout << max(m[2] - m[1] + 1 - r, 0) << endl;
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