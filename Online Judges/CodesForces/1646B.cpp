#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+3];

        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];

        }
        sort(ar+1,ar+n+1);


        ll s1=ar[1],s2=0;
        ll l=2,r=n;
        ll f=0;
        while(l<=(n/2+1))
        {
            s1+=ar[l];
            s2+=ar[r];
            if(s2>s1)
            {
                f=1;
                break;
            }
            l++;
            r--;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


}

