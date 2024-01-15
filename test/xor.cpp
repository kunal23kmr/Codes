#include <iostream>
#include <string>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

string convertToBase(ll decimal, ll toBase, ll fixedBits)
{
    string result = "";

    while (decimal > 0 || result.length() < fixedBits)
    {
        ll remainder = decimal % toBase;
        char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        result = digit + result;
        decimal /= toBase;
    }

    return result.empty() ? "0" : result;
}

ll all_xor(string &s){
    ll ans = 0;
    for(auto &c:s){
        ans ^= (c - '0');
    }   
    return ans;
}

ll xor_sum(ll l, ll r, ll b)
{
    ll ans = 0;
    ll fixedBits = convertToBase(r, b, 0).size(); // Calculate the fixed number of bits for the maximum number in the range

    for (ll i = l; i <= r; i++)
    {
        string s = convertToBase(i, b, fixedBits);
        ans = (ans%MOD + all_xor(s)%MOD) % MOD; // Convert the string to decimal using base 'b' and accumulate the result
    }

    return ans % MOD;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r, b;
        cin >> l >> r >> b;
        cout << xor_sum(l, r, b) << "\n";
    }

    return 0;
}
