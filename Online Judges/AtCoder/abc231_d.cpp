#include<bits/stdc++.h>
using namespace std;
int car[100005];
#define MX 100005
int parent[MX];

void makeSet(int u)
{
    // initialization code goes here
    parent[u] = u;
}

void init()
{
    for (int i = 1; i <= 100005; i++)
    {
        makeSet(i);
    }
}

//bool flag = false;

int Find(int u)
{
    if (u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v)
{
    int p = Find(u);
    int q = Find(v);
    if (p != q) parent[q] = p;
}

bool isFriend(int u, int v)
{
    return Find(u) == Find(v);
}

int main()
{
    init();
    int n,m,f=1;
    cin>>n>>m;
    int u,v;
   // int p=u,q=v;

    for(int i=1; i<=m; i++)
    {
        cin>>u>>v;
        if(Find(u)==Find(v))
            f=0;
        car[u]++;
        car[v]++;
        Union(u,v);
    }

    for(int i=1; i<=100003; i++)
    {
        if(car[i]>2)
        {
            f=0;
            break;
        }
    }
    if (f==1)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    //main();
}

