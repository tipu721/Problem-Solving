#include<bits/stdc++.h>
using namespace std;
int arr[100000000];
int a[10000005];
int s[1000005];
int main()
{
    int i,j,p,sum,k,r,n;
    for (i=2; i*i<=1000000; i++)
    {
        if (arr[i]==0)
        {
            for (j=2; i*j<=1000000; j++)
            {
                arr[i*j]=-1;
            }
        }
    }
    k=0;
    for ( i=2; i<=1000000; i++)
    {
        if (arr[i]==0)
        {
            n=i;
            p=i;
            sum=0;
            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            if (arr[sum]==0)
            {
                a[p]=1;
                k++;N
            }
        }
    }

    r=0;
    for (i=1; i<=1000000; i++)
    {
        s[i]=s[i-1]+a[i];
    }
    int m;
    cin>>m;
    for (int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<s[b]-s[a-1]<<endl;
    }
    return 0;
}
