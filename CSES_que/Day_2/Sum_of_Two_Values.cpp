// You are given an array of n
//  integers, and your task is to find two values (at distinct positions) whose sum is x

// Input
// The first input line has two integers n
//  and x
// : the array size and the target sum.
// The second line has n
//  integers a1,a2,…,an
// : the array values.

// Output

// Print two integers: the positions of the values.
//  If there are several solutions, you may print any of them.
//  If there are no solutions, print IMPOSSIBLE.

////Algo: Make a pair of values and corresponding index.then sort them...and for each
//  i in range(0,n) find its corresponding complement element...if found print.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> v;
    vector<int>s;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        s.push_back(a);
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    sort(s.begin(),s.end());

    for(int i=0;i<n;i++){
        int comp = x-v[i].first;
        auto it = lower_bound(s.begin()+i+1,s.end(),comp);
        if(it != s.end() &&  *it == comp){
            // int p,q;
            // p = v[i]
            cout<<v[i].second<<" ";
            for(int j=i+1;j<n;j++){
                if(v[j].first == comp){
                    cout<<v[j].second;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}