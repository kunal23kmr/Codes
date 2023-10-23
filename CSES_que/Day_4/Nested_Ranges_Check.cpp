#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int a, b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end());
    int maxL = 0;
    for(int i=0;i<n;i++){
        if(v[i].second<=maxL){
            cout<<"1 ";
        }else{
            
            maxL = max(maxL,v[i].second)

        }
    }
    return 0;
}   