#include<stdio.h>
int main()
{
    int m,n,ans;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m>n)
        ans=(m-1)+(n-1)*m;
        else
        ans=(n-1)+(m-1)*n;
        printf("%d\n",ans);
    }
    return 0;
}
