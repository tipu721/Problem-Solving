#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,ar[200005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];

        long long ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
                ans+=(ar[i]-ar[i+1]);
        }
        cout<<ans<<endl;



    }

}
