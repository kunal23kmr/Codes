#include<iostream>
#include<vector>
using namespace std;

int fun(int a, int b,vector<int>&dp){
    if(a%3!=0 && b%3!=0){
        return ;
    }

}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        if(a>b){
            vector<int>dp(a+1,-1);
            if(dp[a]!=-1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}