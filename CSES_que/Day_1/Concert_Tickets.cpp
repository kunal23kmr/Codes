#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;

    multiset<int>ti;
    int a;

    int *cu = new int[m];
    for(int i=0;i<n;i++){
        cin>>a;
        ti.insert(a);
    }for(int i=0;i<m;i++){
        cin>>cu[i];
    }
    int i=0;
    while(i<m && !ti.empty()){
        auto it = ti.lower_bound(cu[i]);
        if(it == ti.end() || (*it > cu[i] && it != ti.begin())){
            it--;
            cout<<*it<<endl;
            ti.erase(it);
        }
        else if(*it == cu[i]){
            cout<<*it<<endl;
            ti.erase(it);            
        }else {
            cout<<-1<<endl;
        }
        i++;
    }
    int x=m-i;
    while(x--){
        cout<<-1<<endl;
    }
    return 0;
}