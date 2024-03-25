#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,k;
    vector<int>v;
    while(cin>>n>>m)
    {
        v.assign(1000000,vector<int>());
        for(int i=1<=n; i++)
        {
            cin>>d;
            v[d],push_back(i);
        }
        for(int i=0; i<m; i++)
        {
            cin>>k>>d;
            if(k-1<v[d].size())
                cout<<v[d][k-1];
        }


    }
}
