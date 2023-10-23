#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
void print(vector<int> &v)
{
    cout << endl;
    for (auto a : v)
    {
        cout << a;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    string s;
    vector<int> v; // 0 -> -ve   // 1 -> +ve   // 2-> unknown.
    while (t--)
    {
        s = "";
        cin >> s;
        v = {};
        bool f = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (v.size() == 0 && s[i] == '+')
                v.push_back(1);
            else if (v.size() == 0 && s[i] == '-')
            {
                // print(v);
                cout << "NO" << endl;
                f = false;
                break;
            }
            else if (v.size() < 2 && s[i] == '0')
            {
                // print(v);

                f = false;
                cout << "NO" << endl;
                break;
            }
            else if (v.size() > 1 && s[i] == '0')
            {
                if (v.back() == 1)
                {
                    f = false;
                    cout << "NO" << endl;
                    // print(v);

                    break;
                }
                else if (v.back() == 2)
                {
                    for (int j = v.size() - 1; j >= 0; j--)
                    {
                        // cout<<v[j]<<" hi\n";
                        if (v[j] == 2)
                            v[j] = 0;
                        else
                            break;
                    }
                    // print(v);
                }
            }
            else if (s[i] == '+')
            {
                if (v.back() == 0)
                    v.push_back(0);
                else
                    v.push_back(2);
            }
            else if (s[i] == '-')
                v.pop_back();
            else if (s[i] == '1' && v.size() != 0)
            {

                // print(v);
                if (v.back() == 0)
                {

                    cout << "NO" << endl;
                    f = false;
                    break;
                }
                for (int j = v.size() - 1; j >= 0; j--)
                {
                    if (v[j] == 2)
                        v[j] == 1;
                    else
                        break;
                }
            }
        }
        if (f)
            cout << "YES" << endl;
        // print(v);
    }
    return 0;
}