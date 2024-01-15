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
    vector<ll> v(n , 0);
    vector<ll> pre = {0};
    for(auto &i:v){
        cin >> i;
        pre.push_back(pre.back() + i);
    }

    ll q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pre[r + 1] - pre[l] << endl;
    }
}

int main()
{
    fastio int t;
    solve();
    // cin >> t;

    // for (int i = 1; i <= t; i++)
    // {
    //     solve();
    // }
    return 0;
}