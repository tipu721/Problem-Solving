#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int l=0,r=1,ans=1;
    while(r<n)
    {
        if(r<n&&arr[r]-arr[l]<=5)
            r++;
        else
        {
            l++;
        }
        ans=max(ans,r-l);
    }
        cout<<ans<<endl;
   //main();
}
