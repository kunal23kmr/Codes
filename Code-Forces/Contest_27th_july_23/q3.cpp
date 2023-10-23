#include <iostream>
#include <vector>

using namespace std;

long long nCr(int n, int r) {
    long long res = 1;
    r = min(r, n - r);
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + (s[i - 1] - '0');
        }

        long long total_unique_strings = 0;
        for (int i = 0; i < m; i++) {
            int li, ri;
            cin >> li >> ri;
            int number_of_1s = prefix_sum[ri] - prefix_sum[li - 1];
            int number_of_0s = ri - li + 1 - number_of_1s;
            total_unique_strings += nCr(number_of_1s + number_of_0s, number_of_1s);
        }

        cout << total_unique_strings << endl<<endl;
    }

    return 0;
}
