#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

class SegmentTree
{
private:
    vector<ll> tree;
    vector<ll> arr;
    int n;

    void buildTree(int node, int start, int end)
    {
        if (start == end)
        {
            // Leaf node, store the array element
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end) / 2;
            int leftChild = 2 * node + 1;
            int rightChild = 2 * node + 2;

            // Recursively build left and right subtrees
            buildTree(leftChild, start, mid);
            buildTree(rightChild, mid + 1, end);

            // Merge the results of left and right subtrees
            tree[node] = tree[leftChild] + tree[rightChild];
            // Change this based on the problem (e.g., sum, min, max, etc.)
        }
    }

    void updateTree(int node, int start, int end, int index, ll value)
    {
        if (start == end)
        {
            // Leaf node, update the array element
            arr[index] += value;
            tree[node] += value;
        }
        else
        {
            int mid = (start + end) / 2;
            int leftChild = 2 * node + 1;
            int rightChild = 2 * node + 2;

            // Recursively update the affected subtree
            if (index >= start && index <= mid)
            {
                updateTree(leftChild, start, mid, index, value);
            }
            else
            {
                updateTree(rightChild, mid + 1, end, index, value);
            }

            // Merge the updated results of left and right subtrees
            tree[node] = tree[leftChild] + tree[rightChild];
            // Change this based on the problem
        }
    }

    ll query(int node, int start, int end, int left, int right)
    {
        if (start > right || end < left)
        {
            // Completely outside the query range
            return 0; // Change this based on the problem
        }
        else if (start >= left && end <= right)
        {
            // Completely inside the query range
            return tree[node];
        }
        else
        {
            // Partially inside the query range, recurse on both subtrees
            int mid = (start + end) / 2;
            int leftChild = 2 * node + 1;
            int rightChild = 2 * node + 2;

            ll leftSum = query(leftChild, start, mid, left, right);
            ll rightSum = query(rightChild, mid + 1, end, left, right);

            // Merge the results of left and right subtrees
            return leftSum + rightSum;
            // Change this based on the problem
        }
    }

public:
    SegmentTree(const vector<ll> &inputArray)
    {
        arr = inputArray;
        n = arr.size();

        // The size of the segment tree is typically 4 times the size of the input array
        tree.resize(4 * n, 0);

        // Build the segment tree
        buildTree(0, 0, n - 1);
    }

    void update(int index, int value)
    {
        // Update the value at index with the given value
        updateTree(0, 0, n - 1, index, value);
    }

    int query(int left, int right)
    {
        // Query the sum in the range [left, right]
        return query(0, 0, n - 1, left, right);
    }
};
void solve()
{
    SegmentTree *s = new SegmentTree(vector<ll>(1e5, 0));
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> v(n);
    vector<pair<int, int>> q(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> q[i].first >> q[i].second;
    }
    sort(q.begin(), q.end());
    int pre = 0;
    for (auto a : q)
    {
        for (int i = pre; i <= a.first; i++)
        {
            s->update(v[i] - 1, v[i]);
        }
        pre = a.first;
        cout << s->query(v[a.second] + 1, 1e5) << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}