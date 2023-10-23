#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    int * a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }sort(a,a+n);
    ll ans = 1;
    for(int i=0;i<n;i++){
        if(a[i]>ans){
            cout<<ans;
            return 0;
        }
        ans += a[i];
    }
    cout<<ans;
    return 0;
}