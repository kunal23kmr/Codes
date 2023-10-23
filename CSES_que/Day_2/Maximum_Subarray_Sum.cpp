// Given an array of n
//  integers, your task is to find the maximum sum of values in a contiguous, nonempty subarray.

// Input

// The first input line has an integer n
// : the size of the array.

// The second line has n
//  integers x1,x2,…,xn
// : the array values.

// Output

// Print one integer: the maximum subarray sum.

// Constraints
// 1≤n≤2⋅105

// −109≤xi≤109

// Example

// Input:
// 8
// -1 3 -2 5 3 -5 2 2

// Output:
// 9

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll maxSum = INT_MIN;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    cout<<maxSum;
    return 0;
}