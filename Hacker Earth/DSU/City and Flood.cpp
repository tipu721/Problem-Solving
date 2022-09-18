#include<bits/stdc++.h>
using namespace std;
#define MX 100005
int parent[MX];

void makeSet(int u){
    // initialization code goes here
    parent[u] = u;
}

void init(){
    for (int i = 1; i <= MX; i++){
        makeSet(i);
    }
}

//bool flag = false;

int Find(int u){
    if (u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v){
    int p = Find(u);
    int q = Find(v);
    if (p != q) parent[q] = p;
}

bool isFriend(int u, int v){
    return Find(u) == Find(v);
}

int main()
{
    init();

    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    set<int>st;
    for(int i=1; i<=n; i++)
    {
       cout<<parent[i]<<endl;
    }

    return 0;
}
