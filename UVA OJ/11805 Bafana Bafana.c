#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,k,p,ans;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        ans=k+p;
        while(ans>n)
        {
            ans=ans-n;
        }
        printf("Case %d: %d\n",i,ans);

    }
    return 0;
}
