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
        ll n;
        cin>>n;
        ll ar[n+4],mx=-1,pos=-1;
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
            if(ar[i]>=mx)
            {
                mx=ar[i];
                pos=i;
            }
        }
        ll d = n-pos,ans=0,pos2=n;
        ll mx2=-1;
        //cout<<d<<endl;
        for(int i=n; i>=pos+1; i--)
        {
            if(ar[i]>mx2)
            {
                ans++;
                pos2=i;
                mx2=ar[i];

            }

        }


        if(pos==n)
            cout<<0<<endl;
        else
        cout<<ans<<endl;
    }



}
