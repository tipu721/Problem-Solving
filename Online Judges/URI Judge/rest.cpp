#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,d;
    scanf("%d",&c);
    printf("%d %d ",a,b);
    for(i=3;i<=c;i++)
    {
        d=a+b;
        printf(" %d",d);
        a=b;
        b=d;
    }
printf("\n");
    return 0;
}
