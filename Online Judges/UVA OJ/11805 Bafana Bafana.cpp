#include<stdio.h>
int main()
{
    int t,n,k,p,ans;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        if(k+p-n==0)
            printf("Case %d: %d\n",i,n);
        else
            printf("Case %d: %d\n",i,abs(k+p-n));

    }
    return 0;
}
