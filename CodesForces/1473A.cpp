#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,ar[105];
        cin>>n>>d;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        ll c=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>d)
                c++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]+ar[i+1]<=d)
                c1++;
        }
        if(c==0||c1>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
