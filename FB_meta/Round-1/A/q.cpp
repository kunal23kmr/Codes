#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

double fd(int N, vector<int> &X)
{
    sort(X.begin(), X.end());
    long double ans;
    if (N == 5)
    {
        long double lf = (X[0]);
        long double rf = X[4];
        ans = max((rf + X[3]) / 2 - (lf + X[2]) / 2, (rf + X[2]) / 2 - (lf + X[1]) / 2);
    }
    else
    {
        ans = (X[N - 1] + X[N - 2]) / 2 - (X[0] + X[1]) / 2;
    }

    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        vector<int> X(N);

        for (int j = 0; j < N; j++)
        {
            cin >> X[j];
        }

        double res = fd(N, X);
        cout << fixed << setprecision(6);
        cout << "Case #" << i << ": " << res << endl;
    }

    return 0;
}



Just like the public key cryptography, in RSA the encryption key is public and the decryption key is private, which is kept secret. In RSA, this asymmetry is based on the practical difficulty of factoring the product of two large prime numbers.
RSA gets its security from the difficulty of factoring large numbers. The public and private keys are functions of a pair of large prime numbers (100 to 200 digits or even larger).
A user of RSA creates and then publishes a public key based on the two large prime numbers, along with an auxiliary value. The prime numbers must be kept secret. Anyone can use the public key to encrypt a message, but with currently published methods. If the public key is large enough, only someone with knowledge of the prime numbers can feasibly decode the message.
