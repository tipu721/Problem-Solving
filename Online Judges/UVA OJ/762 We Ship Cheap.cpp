#include<bits/stdc++.h>
using namespace std;
map<string,int>visit;
map<string,string>route;
int bfs(string s,string e,map<string,vector<string>>graph)
{
    queue<string>q;
    q.push(s);
    visit[s]=1;
    while(!q.empty())
    {
        string top=q.front();
        q.pop();
        if(top==e)
            return visit[top];
        int sz=graph[top].size();
        for(int i=0; i<sz; i++)
        {
            string n=graph[top][i];
            if(visit[n]==-1)
            {
                visit[n]=visit[top]+1;
                route[n]=top;
                q.push(n);


            }
        }
    }
    return -1;
}
void printpath(string a,string b)
{
    if(a==b)
        return;
    printpath(route[a],b);
    cout<<route[a]<<" "<<a<<endl;
}
int main()
{
    int n;
    bool primera= false;
    while(cin>>n)
    {
        map<string,vector<string>>graph;
        string s1,s2;
        for(int i=0; i<n; i++)
        {
            cin>>s1>>s2;
            graph[s1].push_back(s2);
            graph[s2].push_back(s1);
            visit[s1]=-1;
            visit[s2]=-1;


        }
        string start,ennd;
            cin>>start>>ennd;
        if(primera)
            cout<<endl;
        primera=true;
        if(bfs(start,ennd,graph)!=-1)
            printpath(ennd,start);
        else
            cout<<"No route\n";

    }
    return 0;

}
