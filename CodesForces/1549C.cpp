#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    ll fr[n+5];
    ll u, v, ans=n;
    for(int i=0; i<n; i++)
        fr[i]=0;
    while(m--)
    {
        cin>>u>>v;
        if(u>v)
            swap(u , v);

        fr[u]++;
        //cout<<u<<endl;
        if(fr[u] == 1)
        {
            ans--;
            //cout<<ans<<endl;
        }

    }
    ll q,con;
    cin>>q;
    while(q--)
    {
        cin>>con;
        if(con==1)
        {
            cin>>u>>v;
            if(u>v)
                swap(u, v);
            fr[u]++;
            if(fr[u]==1)
                ans--;
        }
        else if(con == 2)
        {
            cin>>u>>v;
            if(u>v)
                swap(u,v);
            fr[u]--;
            if(fr[u]==0)
                ans++;
        }
        else
            cout<<ans<<endl;
    }

}
