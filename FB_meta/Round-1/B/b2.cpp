#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

vector<int> primeFactors(int n)
{
    vector<int> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}
int summ(vector<int> pf)
{

    ll s = 0;
    for (int j = 0; j < pf.size(); j++)
    {
        s += pf[j];
    }
    return s;
}
void pv(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in2.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);
#endif

    ll tt;
    cin >> tt;
    int a;
    vector<int> pf;
    for (int i = 1; i <= tt; i++)
    {
        cin >> a;
        pf = primeFactors(a);
        ll sum = summ(pf);
        ll sum2 = sum;
        vector<int> v;

        sort(pf.begin(), pf.end());
        pv(pf);

        while ((pf.size() > 1) && sum2 < 41)
        {
            v = pf;
            int first = v[0];
            v.erase(v.begin());
            v[0] *= first;
            sort(v.begin(), v.end());
            sum2 = summ(v);
            if (sum2 >= 41)
            {
                break;
            }
            else
            {
                pf = v;
                pv(pf);
                sum = sum2;
            }
        }
        if (sum > 41 || pf.size() > 100)
        {
            cout << "Case #" << i << ": " << -1 << endl;
            continue;
        }
        else
        {
            int n_zero = 41 - sum;
            for (int x = 0; x < n_zero; x++)
            {
                pf.push_back(1);
            }
            if (pf.size() > 100)
            {
                cout << "Case #" << i << ": " << -1 << endl;
                continue;
            }
            else
            {
                cout << "Case #" << i << ": ";
                cout << pf.size();
                for (int x = 0; x < pf.size(); x++)
                {
                    cout << " " << pf[x];
                }
                cout << endl;
            }
        }
        pf = {};
    }
    return 0;
}