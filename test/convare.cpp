// #include <iostream>
// #include <vector>

// using namespace std;
// using ll = long long;

// class SegmentTree
// {
// private:
//     vector<ll> tree;
//     vector<ll> arr;
//     ll n;
//     int start; // Current position on the conveyor belt

//     void buildTree(ll node, ll start, ll end)
//     {
//         if (start == end)
//         {
//             tree[node] = arr[start];
//         }
//         else
//         {
//             ll mid = (start + end) / 2;
//             buildTree(2 * node, start, mid);
//             buildTree(2 * node + 1, mid + 1, end);
//             tree[node] = tree[2 * node] + tree[2 * node + 1];
//         }
//     }

//     void updateTree(ll node, ll start, ll end, ll index, ll value)
//     {
//         if (start == end)
//         {
//             arr[index] += value;
//             tree[node] += value;
//         }
//         else
//         {
//             ll mid = (start + end) / 2;
//             if (index >= start && index <= mid)
//             {
//                 updateTree(2 * node, start, mid, index, value);
//             }
//             else
//             {
//                 updateTree(2 * node + 1, mid + 1, end, index, value);
//             }
//             tree[node] = tree[2 * node] + tree[2 * node + 1];
//         }
//     }

//     ll queryTree(ll node, ll start, ll end, ll left, ll right)
//     {
//         if (start > right || end < left)
//         {
//             return 0;
//         }
//         else if (start >= left && end <= right)
//         {
//             return tree[node];
//         }
//         else
//         {
//             ll mid = (start + end) / 2;
//             ll leftSum = queryTree(2 * node, start, mid, left, right);
//             ll rightSum = queryTree(2 * node + 1, mid + 1, end, left, right);
//             return leftSum + rightSum;
//         }
//     }

// public:
//     SegmentTree(const vector<ll> &input)
//     {
//         n = input.size();
//         arr = input;
//         tree.resize(4 * n);
//         start = 0; // Initialize start
//         buildTree(1, 0, n - 1);
//     }

//     void update(ll index, ll value)
//     {
//         index = (index + start) % n; // Apply modular arithmetic
//         updateTree(1, 0, n - 1, index, value);
//     }

//     ll query(ll left, ll right)
//     {
//         left = (left + start) % n;   // Apply modular arithmetic
//         right = (right + start) % n; // Apply modular arithmetic
//         return queryTree(1, 0, n - 1, left, right);
//     }

//     void moveConveyorBelt()
//     {
//         start = (start + 1) % n; // Move the conveyor belt
//     }
// };

// void solve()
// {
//     ll n, q;
//     cin >> n >> q;
//     vector<ll> arr(n, 0);
//     SegmentTree segmentTree(arr);

//     ll type, i, u;
//     while (q--)
//     {
//         cin >> type;
//         if (type == 1)
//         {
//             cin >> i >> u;
//             segmentTree.update(i, u);
//         }
//         else if (type == 2)
//         {
//             cin >> i;
//             cout << segmentTree.query(i, i) << endl;
//         }

//         segmentTree.moveConveyorBelt();
//     }
//     return;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

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
    int n, q;
    cin >> n >> q;
    int type, i, u;

    vector<ll> v(q + n + 1, 0);

    while (q > 0)
    {
        cin >> type;
        if(type==1){
            cin >> i >> u;
            v[q + i] += u;
        }
        else
        {
            cin >> i;
            cout << v[q + i] << "\n";
        }
        q--;
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