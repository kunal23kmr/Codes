#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i < n + 1; i++)
    {
        q.push(i);
    }
    while(q.size()>1){
        int frontElement = q.front();
        q.pop();
        cout<<q.front()<<" ";
        q.pop();
        q.push(frontElement);
    }
    cout<<q.front();
    return 0;
}