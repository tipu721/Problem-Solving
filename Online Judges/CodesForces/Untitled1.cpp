#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[105],n,x;
        cin>>n>>x;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int f=0;
        sort(arr,arr+n);
        int mx=arr[n-1];
        for(int i=1; i<=mx; i++)
        {
            f=0;
            for(int j=0; j<n; j++)
            {
                if(i==arr[j])
                {
                   f=1;
                }
            }
           if(f==0)
           {
               x--;
               if(x==0)
               {
                   int ans=i;
                   for(int k=0;k<n;k++)
                   {
                       if(ans+1==arr[k])
                        ans+=1;
                   }
                   cout<<ans<<endl;
                   break;
               }

           }
        }
        if(x!=0)
            cout<<arr[n-1]+x<<endl;

    }
}
