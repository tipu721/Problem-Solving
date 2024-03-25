#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>v1,v2;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v1.push_back(a);
        }
        ll c1=0;
        for(int i=0; i<k; i++)
        {
            ll a;
            cin>>a;
            v2.push_back(a);
            if(a==1)
                c1++;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll s=0,l=0,r=n-1;
        for(int i=0;i<c1;i++)
        {
            s+=v1[r]*2;
            r--;
        }
        for(int i=k-1;i>=c1;i--)
        {
            s+=v1[l]+v1[r];
            r--;
            l+=(v2[i]-1);

        }



        cout<<s<<endl;
    }
}

