#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

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
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end) / 2;
            buildTree(2 * node, start, mid);
            buildTree(2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] ^ tree[2 * node + 1];
        }
    }

    ll queryTree(int node, int start, int end, int left, int right)
    {
        if (start > right || end < left)
        {
            return 0;
        }
        else if (start >= left && end <= right)
        {
            return tree[node];
        }
        else
        {
            int mid = (start + end) / 2;
            ll leftXOR = queryTree(2 * node, start, mid, left, right);
            ll rightXOR = queryTree(2 * node + 1, mid + 1, end, left, right);
            return leftXOR ^ rightXOR;
        }
    }

public:
    SegmentTree(const vector<ll> &input)
    {
        n = input.size();
        arr = input;
        tree.resize(4 * n);
        buildTree(1, 0, n - 1);
    }

    ll query(int left, int right)
    {
        return queryTree(1, 0, n - 1, left, right);
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        // Build a Segment Tree with XOR operation
        SegmentTree segmentTree(arr);

        int q;
        cin >> q;

        while (q--)
        {
            int l, r, x, y;
            cin >> l >> r >> x >> y;

            // Calculate XOR of the subarray [l, r]
            ll subarrayXOR = segmentTree.query(l - 1, r - 1);

            // Check the condition (ai xor x) <= y
            if ((subarrayXOR ^ x) <= y)
            {
                cout << r - l + 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
