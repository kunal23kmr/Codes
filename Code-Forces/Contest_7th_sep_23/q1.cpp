#include<bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long 
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        c=2*c;
        cout<<((abs(a-b)+c-1)/c)<<endl;
    }
    return 0;
}