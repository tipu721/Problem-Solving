#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int sum=0;
        scanf("%d",&n);
        for(int j=1;j<=n/2;j++)
        {
            if(n%j==0)
                sum+=j;
        }
        if(sum==n)
            printf("perfect\n");
        else if(sum<n)
            printf("deficient\n");
        else if(sum>n)
            printf("abundant\n");
    }
    return 0;
}
