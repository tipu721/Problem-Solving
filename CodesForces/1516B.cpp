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
        unsigned long long ar[n+2];
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        unsigned long long prexor[n+3];
        prexor[0]=0;
        for(int i=1; i<=n; i++)
        {
            prexor[i]=prexor[i-1]^ar[i];

        }
        bool ans=false;
        for(int i=1; i<n; i++)
        {
            unsigned long long a=prexor[i];
            unsigned long long b=prexor[n]^prexor[i];
            if(a==b)
            {
                ans=true;
                break;
            }
        }
        for(int i=1; i<n-1; i++)
        {
            unsigned long long a=prexor[i];
            for(int j=i+1; j<n; j++)
            {
                unsigned long long b=prexor[j]^prexor[i];
                unsigned long long c=prexor[n]^prexor[j];
                if(a==b && b==c)
                {
                    ans=true;
                    break;
                }
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
