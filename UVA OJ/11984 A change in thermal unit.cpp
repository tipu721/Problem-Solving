#include<stdio.h>
int main()
{
    int t;
    double ans,c,f,c1;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf",&c,&f);
        c1=((f-32)*5)/9;
        ans=c+c1;
        printf("Case %d: %.2lf\n",i,ans);
    }
    return 0;
}
