#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,sum=0,mx=-1;
        cin>>a>>b>>n;
        vector<ll>v1,v2;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v1.push_back(a);
            mx=max(mx,a);
        }
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v2.push_back(a);

        }
        for(int i=0; i<n; i++)
        {
            ll p=v2[i]/a;
            if(v2[i]%a!=0)
                p++;
            sum+=p*v1[i];

        }
        sum-=mx;
        //cout<<sum<<endl<<mx<<endl;
        if(sum<0)
            cout<<"YES"<<endl;
        else if(b-sum>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
