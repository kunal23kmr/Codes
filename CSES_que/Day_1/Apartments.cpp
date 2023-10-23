#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int ans = 0;
    int n, m, k;
    cin >> n >> m >> k;
    priority_queue<int> q1;
    priority_queue<int> q2;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        q1.push(a);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        q2.push(a);
    }

    while (!q1.empty() && !q2.empty())
    {
        int x = q1.top();
        int y = q2.top();
        if (abs(x - y) >= 0 && abs(x - y) <= k)
        {
            ans++;
            q1.pop();
            q2.pop();
        }
        else
        {
            if(x>y){
                q1.pop();
            }else{
                q2.pop();
            }
        }
    }
    cout<<ans;

    return 0;
}