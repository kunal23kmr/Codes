#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long

std::vector<int> prime_factors(int n)
{
    std::vector<int> factors;

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

    if (n > 2)
        factors.push_back(n);

    return factors;
}

std::vector<int> get_all_factors(int n)
{
    std::vector<int> prime_factors_list = prime_factors(n);
    std::vector<int> factors = {1}; // 1 is always a factor

    for (int i = 0; i < prime_factors_list.size(); ++i)
    {
        int current_factor = prime_factors_list[i];
        int factor_count = factors.size();

        for (int j = 0; j < factor_count; ++j)
        {
            int new_factor = factors[j] * current_factor;
            factors.push_back(new_factor);
        }
    }

    return factors;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cout << endl;
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end());
        vector<int> b, c;
        b.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            bool f = false;
            for (int j = 0; j < b.size(); j++)
            {
                if ((b[j] % a[i]) == 0)
                {
                    f = true;
                    b.push_back(a[i]);
                    break;
                }
            }
            if (!f)
            {
                c.push_back(a[i]);
            }
        }
        if (b.size() > 0 && c.size() > 0)
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            for (auto x : c)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}