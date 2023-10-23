// #include <iostream>
// #include <math.h>
// using ll = long long;
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int y, x;
//         cin >> y >> x;
//         ll a = max(x, y);
//         if (a % 2 == 0)
//         {
//             a = 1 + (a * (a - 1));
//             if (a == y)
//             {
//                 a += y - x;
//             }
//             else
//             {
//                 a -= x - y;
//             }
//         }
//         else
//         {
//             a = 1 + (a * (a - 1));
//             if (a == y)
//             {
//                 a -= y - x;
//             }
//             else
//             {
//                 a += x - y;
//             }
//         }
//         cout<<a<<endl;
//     }
//     return 0;
// }
