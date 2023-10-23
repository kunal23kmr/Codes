#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int maxi=0,temp=0;
        
        int r;
        for(int j=0;j<a;j++){
            cin>>r;
            if(r==0){
                maxi++;
            }else{
                temp=max(maxi,temp);
                maxi=0;
            }
        }
        temp=max(maxi,temp);
        cout<<temp<<endl;
    }
       
    return 0;
}