#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int a=1;
    for(int i=0;i<n;i++){
        a=1;
        for(int j=0;j<v[i].size();j++){
            if(j==0 && v[i][j]=='0'){
                a=0;
                break;
            }
            if(j==0 && v[i][j]=='?'){
                a=a*9;
            }else if(v[i][j]=='?'){
                a=a*10;
            }
        }cout<<a<<endl;
    }    
    return 0;
}