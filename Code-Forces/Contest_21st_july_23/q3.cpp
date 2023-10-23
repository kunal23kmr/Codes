#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        string s="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>c;
                if(c!='.'){
                    s+=c;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}