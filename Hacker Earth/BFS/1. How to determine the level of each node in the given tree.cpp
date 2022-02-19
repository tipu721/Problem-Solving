#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,vector<int> >graph;
    int n;
    cin>>n;
    for(int i=1; i<=n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
    }
    int start;
    cin>>start;
    map<int,int>visited;
    queue<int>q;
    q.push(start);
    visited[start]=0;
    while(q.empty()==false)
    {
        //cout<<"OK"<<endl;
        int top=q.front();
        q.pop();
        for(int i=0; i<graph[top].size(); i++)
        {
            int n=graph[top][i];
            cout<<n<<endl;
            if(!visited.count(n))
            {
                q.push(n);
                visited[n]=visited[top]+1;
                cout<<visited[n]<<endl;
            }

        }
    }
    while(1)
    {
        int a,b;
        cin>>a>>b;
        cout<<"s p "<<a<<"&"<<b<<"="<<abs(visited[a]-visited[b])<<endl;
    }

}

