#include<stdio.h>
int main()
{
    int i,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        {
        if(num%2==0&&num>0)
            printf("EVEN POSITIVE\n");
        if(num%2==0&&num<0)
            printf("EVEN NEGATIVE\n");
        if(num%2!=0&&num>0)
            printf("ODD POSITIVE\n");
        if(num%2!=0&&num<0)
            printf("ODD NEGATIVE\n");
        if(num==0)
            printf("NULL\n");
        }
    }
    return 0;
}
