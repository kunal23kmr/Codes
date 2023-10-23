#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        m=arr[0];
        int temp=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<m){
                ans = m;
            }
            else{
                m=arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}