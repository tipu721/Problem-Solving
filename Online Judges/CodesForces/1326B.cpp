#include<bits/stdc++.h>
using namespace std;
long long arr[200005];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long ans=0;
    long long mx=0;
    for(int i=0; i<n; i++)
    {
        mx=max(mx,ans);

       ans=arr[i]+mx;
       cout<<ans<<" ";

    }

   // main();

}
