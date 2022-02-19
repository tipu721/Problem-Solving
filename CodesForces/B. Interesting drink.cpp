#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int q;
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        int m,l=0,r=n-1,mid=(l+r)/2,f=0;
        cin>>m;
        while(l<=r)
        {
            if(arr[mid]<=m)
            {
               f=mid+1;
                l=mid+1;
            }
            else
                r=mid-1;
            mid=(l+r)/2;
        }
        cout<<f<<endl;
    }
}
