#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<int>v(n);
    int i=0;
    int even=2;
    int odd=1;
    for(;i<n/2;i++,even+=2){
        v[i]=even;
    }
    for(;i<n;i++,odd+=2){
        v[i]=odd;
    }
    for(auto a:v){
        cout<<a<<" ";
    }
    return 0;
}