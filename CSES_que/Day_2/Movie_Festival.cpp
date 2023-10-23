#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    // int * b= new int[n];
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    int ans = 0;
    int s =0;
    for(int i=0;i<n;i++){
        if(s<=v[i][1]){
            s=v[i][0];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}