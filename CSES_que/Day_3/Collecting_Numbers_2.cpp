//not done
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m;
    int *pos = new int[n + 2];
    int *v=new int[n];
    pos[n + 1] = 999999;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[i]=a;
        pos[a] = i;
    }
    int ans = 1;
    for (int j = 1; j < n; j++)
    {
        if (pos[j] > pos[j + 1])
        {
            ans++;
        }
    }
    int b;
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        int x,y,ax,ay;
        x=(pos[v[a-1]]>pos[v[a-1]+1]);
        y=(pos[v[b-1]]>pos[v[b-1]+1]);

        temp = pos[v[a-1]];
        pos[v[a-1]]=pos[v[b-1]];
        pos[v[b-1]]=temp;

        temp =v[a-1];
        v[a-1]=v[b-1];
        v[b-1]=temp;

        ax=(pos[v[a-1]]>pos[v[a-1]+1]);
        ay=(pos[v[b-1]]>pos[v[b-1]+1]);

        ans += ax-x + ay-y;
        cout<<ans<<endl;
    }
    return 0;
}