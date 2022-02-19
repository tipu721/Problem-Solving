#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>g[100005];
int vis[100005]= {0};
int parent[100005] ={0};
int bfs(int s,int e)
{
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0; i<g[p].size(); i++)
        {
            if(vis[g[p][i]]==0)
            {
                parent[g[p][i]]=p;
                vis[g[p][i]]=vis[p]+1;
                q.push(g[p][i]);
                if(g[p][i]==e)
                    return vis[p]+1;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,t,c;
    cin>>n>>m>>t>>c;
    int u,v;
    for(int i=1; i<=m; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    for(int i=1;i<=n;i++)
        sort(g[i].begin(),g[i].end());
    int x,y;
    cin>>x>>y;
    int d=bfs(x,y);
    stack<int>temp;
    while(parent[y]!=0)
    {
        temp.push(y);
        y=parent[y];
    }
    temp.push(x);
    cout<<temp.size()<<endl;
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    //cout<<"OK"<<endl;
}

