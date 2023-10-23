// concept :- from end->(j) to 0, for each 'j'
// find an complemnt <= k-arr[j] (using binary search) total time comp.= O(nLog(n))
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; // n->child, k->maxi weight
    cin >> n >> k;
    int ans = 0;
    int *arr = new int[n];
    map<int, int> freq;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
        s.insert(arr[i]);
    }
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[arr[i]] > 0)
        {
            freq[arr[i]]--;
            if (freq[arr[i]] == 0)
            {
                s.erase(arr[i]);
            }
            // cout << arr[i] << " ";
            ans++;

            int comp = k - arr[i];
            auto it = s.lower_bound(comp);
            if (it == s.end() && s.size() > 0)
            {
                it--;
                freq[*it]--;
                if (freq[*it] == 0)
                {
                    s.erase(*it);
                }
            }
            else if (it != s.end())
            {
                if (*it <= comp)
                {
                    // cout << "if " << *it;

                    freq[*it]--;
                    if (freq[*it] == 0)
                    {
                        s.erase(*it);
                    }
                }
                else if (*it > comp && it!=s.begin())
                {
                    if (s.size() > 0)
                    {
                        it--;
                        freq[*it]--;
                        if (freq[*it] == 0)
                        {
                            s.erase(*it);
                        }
                    }
                    // cout << "else ";
                }
            }
            // cout << endl;
        }
    }
    cout << ans;

    return 0;
}