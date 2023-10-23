#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;

int main()
{
    int n;
    cin >> n;
    // total_ways = (n**2 * (n**2 - 1)) // 2
    // attack_ways = 2 * (n-2) * (n-1) * 2
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    else if (n == 2)
    {
        cout << 0 << endl
             << 6;
        return 0;
    }
    cout << 0 << endl
         << 6 << endl;
    for (ll i = 3; i <= n; i++)
    {
        ll way = static_cast<long long>(std::pow(i, 2)) *( (static_cast<long long>(std::pow(i, 2)))-1) / 2;
        ll att = 4 * (i - 2) * (i - 1);
        cout << way - att << endl;
    }return 0;
}