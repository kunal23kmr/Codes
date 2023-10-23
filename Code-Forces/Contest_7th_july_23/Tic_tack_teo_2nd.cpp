#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        char mat[3][3]{'1'};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }

        // case1
        char winner;
        bool win = false;
        for (int i = 0; i < 3; i++)
        {
            winner = mat[i][0];
            if (mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2])
            {
                cout << winner << endl;
                win = true;
                break;
            }
        }
        if (win == true)
        {
            continue;
        }

        for (int i = 0; i < 3; i++)
        {
            winner = mat[0][i];
            if (mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i])
            {
                cout << winner << endl;
                win = true;
                break;
            }
        }
        if (win == true)
        {
            continue;
        }
        winner = mat[1][1];
        if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
        {
            cout << winner << endl;
            continue;
        }
        if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
        {
            cout << winner << endl;
            continue;
        }
        
        cout << "DRAW" << endl;
    }
    return 0;
}