// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int *a= new int[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     int x=n+1;
//     int ans =0;
//     for(int i=0;i<n;i++){
//         if(x>a[i]){
//             ans++;
//             x=a[i];
//         }
//     }
//     cout<<ans;
//     return 0;
// }

#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // int *a = new int[n];?
    int a;
    int *b = new int [n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b[a] = i;
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (b[i] > b[i+1])
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}