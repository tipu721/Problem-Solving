#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    scanf("%d %d",&a,&b);
    while(b<=0){scanf("%d",&b);}

    for(i=1;i<=b;i++)
    {
        sum=sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
