#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e;
    cin>>e;
    map<int,vector<int>>graph;
    for(int i=0; i<e; i++)
    {
        int n;
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            int a;
            cin>>a;
            graph[i].push_back(a);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int mx=0,m=0,d;
        int source;
        cin>>source;
        queue<int>q;
        q.push(source);
        map<int,int>visited;
        visited[source]=0;

        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            if(graph[top].size()>mx)
            {
                mx=graph[top].size();
                m=top;
                cout<<m<<endl;
            }
            for(int i=0; i<graph[top].size(); i++)
            {
                int a=graph[top][i];
                if(!visited.count(a))
                {
                    q.push(a);
                    visited[a]=visited[top]+1;
                }
            }
        }
        if(m==0)
            cout<<0<<endl;
        else
            cout<<graph[m].size()<<" "<<visited[m]+1<<endl;
    }

}
