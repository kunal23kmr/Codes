//TLE de raaha
//And at a place the logic is also wrong;

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ans =0;
//     vector<vector<int>>v;
//     int a,b;
//     for(int i=0;i<n;i++){
//         cin>>a>>b;
//         v.push_back({b,a});
//     }
//     sort(v.begin(),v.end());
//     multiset<int>s; //for leaving time...
//     for(int i=0;i<n;i++){
//         s.insert(v[i][0]);
//         while(*s.begin()<v[i][1]){
//             s.erase(*s.begin());
//         }
//         int p=s.size();
//         ans = max(ans,p);
//     }
//     cout<<ans;
//     return 0;
// }   


//2 pointer
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    int *d=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>d[i];
    }
    sort(a,a+n);
    sort(d,d+n);
    int i=0; // a 
    int j=-1; // d
    int maxi=0;

    for(;i<n;i++){
        while(d[j+1]<a[i]){
            j++;
        }
        maxi = max(maxi,i-j);
    }
    cout<<maxi;
    
    return 0;
}