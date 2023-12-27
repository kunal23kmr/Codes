#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll large = 0;
        ll ans = 0;
        int last;
        stack<ll>s;

        for (int i = 0; i < n; i++)
        {
            int operation;
            cin >> operation;
            
            if (operation == 1)
            {
                cin >> last;
                s.push(last);
                large += s.top();
            }
            else
            {
                large -= s.top();
                s.pop();
            }
            ans = max(ans, large);
        }
        cout << ans << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         ll currentSum = 0;
//         ll maxSum = 0;
//         int currentValue;
//         stack<ll> st;

//         for (int i = 0; i < n; i++)
//         {
//             int operation;
//             cin >> operation;
//             if (operation == 1)
//             {
//                 cin >> currentValue;
//                 st.push(currentValue);
//                 currentSum += st.top();
//             }
//             else if(!st.empty())
//             {
//                 currentSum -= st.top();
//                 st.pop();
//             }
//             maxSum = max(maxSum, currentSum);
//         }
//         cout << maxSum << endl;
//     }
//     return 0;
// }
