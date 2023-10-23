#include<bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long 
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        bool f=true;
        for(int i=0;i<a.size()-1;i++){
            if(((a[i]==b[i]) && (a[i]=='0')) && ((a[i+1]==b[i+1]) && (a[i+1]=='1'))){
                cout<<"YES"<<endl;
                f=false;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}