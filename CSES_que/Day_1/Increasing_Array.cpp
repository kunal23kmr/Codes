#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a=0;
    vector<int>v(n);
    for(int i=0,b;i<n;i++){
        cin>>b;
        v[i]=b;
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            a+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }cout<<a;
    return 0;
}