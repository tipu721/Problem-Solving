#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll ar[n+3],mx=0,ans=1;
        map<ll,ll>mp;
        for(int i=1; i<=n; i++)
        {

            cin>>ar[i];
            if(ar[i]>i)
                ans=0;

        }
        ll c=0;
        vector<ll>v;
        for(int i=1; i<=n; i++)
        {
            if(ar[i]==i)
                c++;

        }
        if(ans)
        {
            for(int i=0; i<v.size(); i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;


    }
}

