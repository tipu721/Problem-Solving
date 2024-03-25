#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,x,ar[100005];
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        ll k=1,c=0;
        for(int i=n-1; i>=0; i--)
        {
            if(ar[i]*k>=x)
            {
                c++;
                k=1;
            }
            else
                k++;

        }
        cout<<c<<endl;
    }
}
