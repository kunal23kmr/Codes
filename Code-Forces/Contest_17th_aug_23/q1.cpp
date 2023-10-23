#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
bool check(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && s[i] == ')' && st.top() == '(')
        {
            st.pop();
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            return false;
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (!check(s))
        {
            cout << "YES" << endl;
            for (int i = 0; i < s.size(); i++)
            {
                cout << "()";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}