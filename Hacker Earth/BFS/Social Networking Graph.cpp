#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>g[100005];
int vis[100005],level[100005];
void initial()
{
    for(int i=0;i<=100005;i++)
    {
        vis[i]=0;
        level[i]=0;
    }
}
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    vis[s]=1;
    level[s]=0;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0; i<g[p].size(); i++)
        {
            if(vis[g[p][i]]==0)
            {
                vis[g[p][i]] = 1;
                level[g[p][i]] = level[p] + 1;
                q.push(g[p][i]);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int node,edge;
    cin>>node>>edge;
    for(int i=1; i<=edge; i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }

    int q,a,t;
    cin>>q;
    while(q--)
    {
        int ans=0;
        cin>> a >> t;
        initial();
        bfs(a);
        for(int i=0; i<=100005; i++)
        {

            if(vis[i]==1&&abs(level[i]-level[a])==t)
                ans++;

        }
        cout<<ans<<endl;
    }
}
