#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string temp="codeforces";

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<10;i++){
            if(s[i]!=temp[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
       
    return 0;
}