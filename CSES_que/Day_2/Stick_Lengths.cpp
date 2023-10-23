// There are n
//  sticks with some lengths. Your task is to modify the sticks so that each stick has the same length.

// You can either lengthen and shorten each stick. Both operations cost x
//  where x
//  is the difference between the new and original length.

// What is the minimum total cost?

// Input

// The first input line contains an integer n
// : the number of sticks.

// Then there are n
//  integers: p1,p2,…,pn
// : the lengths of the sticks.

// Output

// Print one integer: the minimum total cost.

// Constraints
// 1≤n≤2⋅105

// 1≤pi≤109

// Example

// Input:
// 5
// 2 3 1 5 2

// Output:
// 5

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;

    int *a=new int[n];
    ll sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // sum+=a[i];
    }
    sort(a,a+n);
    int median ;
    if(n%2 != 0){
        median = a[n/2];
    }else {
        ll x = (((ll)a[n/2 -1]) + ((ll)a[n/2]))/2;
        if((x-(int)x) > 0.5){
            median = 1 + (int)x;
        }else{
            median = (int)x;
        }
    }
    for(int i=0;i<n;i++){
        sum += abs(median-a[i]);
    }
    cout<<sum;
    return 0;
}