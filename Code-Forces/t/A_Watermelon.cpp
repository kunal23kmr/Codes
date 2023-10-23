#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d",&n);
    if(n==2){
        printf("NO");
        return 0;
    }

    if((n%2)==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}