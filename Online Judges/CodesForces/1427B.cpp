#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>batch;
        ll c=0;
        ll ans=0,c1=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
                c1++;
            else if(c1)
            {

                ans+=(c1*2-1);
                c1=0;
            }
        }
        if(c1)
        {
            ans+=(c1*2-1);
        }
       // cout<<ans<<endl;
        for(int i=1; i<n-1; i++)
        {
            if(s[i-1]=='W'&&s[i]=='L')
            {
                c++;
            }
            else if(c&&s[i]=='L')
                c++;
            if(c&&s[i+1]=='W'&&s[i]=='L')
            {

                batch.push_back(c);
                c=0;
            }

        }
        sort(batch.begin(),batch.end());
        for(int i=0;i<batch.size();i++)
        {
            if(batch[i]<=k)
            {
                ans+=(2*batch[i])+1;
                k-=batch[i];
            }
            else if(k)
            {
                ans+=2*k;
                k-=k;
                break;
            }
        }
        //cout<<ans<<endl;
        ll fast=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W')
                break;
            else
                fast++;
        }
        ll last=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='W')
                break;
            else
                last++;
        }
        ans+=min(fast+last,k)*2;
        if(fast==n)
        {
            ans=(min(fast,k)*2)-1;
            if(ans>0)
                cout<<ans<<endl;
            else
                cout<<0<<endl;
        }
        else
        cout<<ans<<endl;


    }
    return 0;
}
