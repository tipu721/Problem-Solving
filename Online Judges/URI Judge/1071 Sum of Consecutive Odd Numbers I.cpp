#include<stdio.h>
int main()
{
    int i,x,y,n,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    if(x%2==0)
        n=x+1;
    if(x%2!=0)
        n=x+2;
    for(i=n; i<y; i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
