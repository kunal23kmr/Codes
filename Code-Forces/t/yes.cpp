#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char a;
        cin>>a;
        bool f1=false,f2=false,f3=false;
        if(toupper(a)=='Y'){
            f1=true;
        }cin>>a;
        if(toupper(a)=='E'){
            f2=true;
        }cin>>a;
        if(toupper(a)=='S'){
            f3=true;
        }
        if(f1 && f2 && f3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}