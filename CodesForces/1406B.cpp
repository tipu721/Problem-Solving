#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll par[100005],nar[100005],ar[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,np=0,pp=0;
        ll ans1[6]={0},ap=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {

            cin>>ar[i];
            if(ar[i]<0)
                nar[np++]=ar[i]*-1;
            else
                par[pp++]=ar[i];


        }
        sort(ar,ar+n);
        sort(par,par+pp);
        sort(nar,nar+np);

        if(pp>=5)
            ans1[ap++]=par[pp-1]*par[pp-2]*par[pp-3]*par[pp-4]*par[pp-5];
        if(pp>=1&&np>=4)
            ans1[ap++]=nar[np-1]*nar[np-2]*nar[np-3]*nar[np-4]*par[pp-1];
        if(pp>=3&&np>=2)
            ans1[ap++]=nar[np-1]*nar[np-2]*par[pp-1]*par[pp-2]*par[pp-3];
        else
            ans1[ap++]=ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]*ar[n-5];
        sort(ans1,ans1+ap);
        cout<<ans1[ap-1]<<endl;




    }
}
