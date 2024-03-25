#include<bits/stdc++.h>
using namespace std;
long long arr1[1000005],arr2[1000005];
int main()
{
    int n,m;
    while(cin>>n>>m)
    {   int sum=0;
        if(n==0&&m==0)
            break;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        for(int i=0; i<m; i++)
            cin>>arr2[i];
        for(int i=0; i<m; i++)
        {
            int l=0,r=n-1,mid=(l+r)/2;
            while(l<=r)
            {
                if(arr2[i]>arr1[mid])
                    l=mid+1;
                else if(arr2[i]<arr1[mid])
                    r=mid-1;
                else if(arr2[i]==arr1[mid])
                {
                    sum++;
                    break;
                }
                mid=(l+r)/2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
