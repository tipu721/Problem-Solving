#include<bits/stdc++.h>
using namespace std;
vector<int>g[1005];
int level[1005];
int vis[1005];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    level[s]=0;
    vis[s]=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0; i<g[p].size(); i++)
        {
            if(vis[g[p][i]]==0)
            {
                level[g[p][i]]=level[p]+1;
                q.push(g[p][i]);
                vis[g[p][i]]=1;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }
    bfs(1);
    int q;
    cin>>q;
    int ans=1005,mnd=1005;
    while(q--)
    {
        int a;
        cin>>a;
        if(level[a]<=mnd)
        {
            mnd=level[a];
            ans=min(ans,a);
        }


    }
     cout<<ans<<endl;
}
