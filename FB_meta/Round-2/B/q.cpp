#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

bool canFormMetaLogo(const vector<int> &A, const vector<int> &B)
{
    int N = A.size();

    for (int i = 0; i < N; i++)
    {
        if (A[i] != B[N - i - 1])
        {
            return false;
        }
    }

    int mid = (N + 1) / 2;
    for (int i = 0; i < mid; i++)
    {
        if (A[i] >= B[i] || A[N - i - 1] <= B[N - i - 1])
        {
            return false;
        }
    }

    return true;
}

int secondsToFormMetaLogo(const vector<int> &A, const vector<int> &B)
{
    if (!canFormMetaLogo(A, B))
    {
        return -1;
    }

    int N = A.size();
    int seconds = 0;

    int i = 0;
    while (i < N)
    {
        if (A[i] == B[i])
        {
            i++;
        }
        else
        {
            int j = i;
            while (j < N && A[i] == A[j])
            {
                j++;
            }
            seconds += (j - i);
            i = j;
        }
    }

    return seconds;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ll tt;
    cin >> tt;

    for (int id = 1; id <= tt; id++)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            m[b[i]]++;
        }
        int result = -1;
        bool flag = true;

        for (auto &it : m)
        {
            if ((it.second % 2) != 0)
            {
                flag = false;
            }
        }

        int cnt = 0;

        int result = secondsToFormMetaLogo(a, b);
        cout << "Case #" << id << ": " << result << endl;
    }

    return 0;
}
