#include<bits/stdc++.h>
using namespace std;
int arr[100005],cs[100005];
int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cs[i+1]=cs[i]+arr[i];
        //cout<<cs[i+1]<<endl;
    }

    int l=1,r=n,mid=(l+r)/2,f=0;
    while(l<=r)
    {
        //cout<<cs[mid]<<endl;
        if(cs[mid]<=t)
        {
            f=mid;
            l=mid+1;
        }
        else
            r=mid-1;
        mid=(l+r)/2;
    }
    cout<<f<<endl;
    main();


}
