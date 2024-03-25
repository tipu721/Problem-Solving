#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long i=1; i<=t; i++)
    {
        int arr[1001],n;
        scanf("%d",&n);
        double sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        sum/=n;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sum)
                c++;
        }
        double ans=((double)c/n)*100;
        printf("%.3lf%%\n",ans);

    }
    return 0;
}
