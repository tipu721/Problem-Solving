#include<bits/stdc++.h>
using namespace std;
map<string,int>visited;
void bfs(string start,string en,vector<string>graph)
{
    queue<string>q;
    q.push(start);
    visited[start]=0;
    while(!q.empty()&&visited.count(en)==0)
    {
        string top=q.front();
        q.pop();
        for(int i=0; i<graph.size(); i++)
        {
            int dif=0;
            if((top.size()==graph[i].size())&&visited.count(graph[i])==false)
            {
                for(int j=0; j<top.size(); j++)
                {
                    if(top[j]!=graph[i][j])
                        dif++;
                }
            }
            if(dif==1)
            {
                q.push(graph[i]);
                visited[graph[i]]=visited[top]+1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
   // getchar();
    while(t--)
    {
        vector<string>graph;
        string s;
        //getchar();
        while((cin>>s)&&s!="*")
        {
            graph.push_back(s);
        }
        cin.ignore();
        string fullline,start,en;
        while(getline(cin,fullline)&&fullline!="")
        {
            stringstream str(fullline);
            str>>start>>en;
            visited.clear();
            bfs(start,en,graph);
            cout<<start<<" "<<en<<" "<<visited[en]<<endl;
        }

        if(t)
            cout<<endl;

    }
}
