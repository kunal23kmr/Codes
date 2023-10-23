#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<1;
        return 0;
    }
    int ans=0;
    int maxi=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            maxi++;
        }else{
            ans=max(ans,maxi);
            maxi=0;
        }
    }ans=max(ans,maxi);
    cout<<ans+1;
    
    return 0;
}