#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,ar[1005];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=n-1;i>=1;i--)
        {
            while(1)
            {
                ar[i]+=ar[0];
                if(ar[i]>k)
                    break;
                else
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
}
