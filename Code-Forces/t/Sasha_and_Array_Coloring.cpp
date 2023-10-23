#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int s=0,e=n-1;
        int ans=0;
        while(s<e){
            ans += v[e]-v[s];
            s++;e--;
        }
        cout<<ans<<endl;
    }
    return 0;
}