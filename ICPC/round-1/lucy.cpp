#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, V, X;
        cin >> N >> V >> X;
        cout <<( (V * X) + min(3 * V, N) * X + X) << endl;
    }

    return 0;
}
