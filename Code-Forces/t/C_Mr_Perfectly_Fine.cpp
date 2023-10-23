#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    //int sk1=0,sk2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int mini=INT_MAX;
        int s1=INT_MAX,s2=INT_MAX;
        for(int j=0;j<x;j++){
            int a;
            string s;
            cin>>a;
            cin>>s;
            if(s=="11"){
                mini=min(mini,a);
            }else if(s=="01"){
                s1=min(s1,a);
            }else if(s=="10"){
                s2=min(s2,a);
            }
        }
        if(s1!=INT_MAX && s2!=INT_MAX){
            s1+=s2;
            mini=min(mini,s1);
        }        
        
        if(mini==INT_MAX){
            mini=-1;
        }
        cout<<mini<<endl;
    }

       
    return 0;
}