#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> m;
        int n;
        cin >> n;

        string s;
        cin >> s;
        for (int i = 0; i < 26; i++)
        {
            m[i + 'A'] = i + 1;
        }
        for(auto c:s){
            m[c]--;
        }

        int cnt=0;
        for(auto a:m){
            if(a.second<1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

