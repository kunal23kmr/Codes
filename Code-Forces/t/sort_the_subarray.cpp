#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<int>v1(a);
        int b;
        for(int i=0;i<a;i++){
            cin>>b;
            v1.push_back(b);
        }
        vector<int>v2(a);
        for(int i=0;i<a;i++){
            cin>>b;
            v2.push_back(b-v1[i]);
        }
        int l=1,r=a;
        for(int i=0;i<a;i++){
            if(v2[i] != 0){
                l=i+1;
                break;
            }
        }
        vector<int>v3;
        vector<int>v4;
        for(int i=0;i<r;i++){
            v3.push_back(v1[i]);
            v4=v3;
            sort(v3.begin(),v3.end());
            if(v3==v4){
                l=1;
            }

        }        
        for(int i=a-1;i>=0;i++){
            if(v2[i] != 0){
                r=i+1;
                break; 
            }
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}