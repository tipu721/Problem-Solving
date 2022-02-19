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
        ll n,ar[55];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int c=2,f=0,f1=0;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i+1]<ar[i])
            {
                f=1;
            }
            if(ar[i]<=ar[i+1])
            f1=1;
        }
        if(f==0)
            c=0;
        else if(f1==0)
            c=3;
        else if(ar[0]==1)
            c=1;
        else if(ar[n-1]==n)
            c=1;

        cout<<c<<endl;
    }
}

