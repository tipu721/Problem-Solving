#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long i=1;i<=t;i++)
    {
        int arr[52],n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        long long c=0;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            c++;
        }
        printf("Optimal train swapping takes %lld swaps.\n",c);
    }
    return 0;
}
