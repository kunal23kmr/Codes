#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>freq;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        freq[a]++;
    }
    cout<<freq.size();
    return 0;
}