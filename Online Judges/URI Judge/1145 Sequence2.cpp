#include<stdio.h>
int main()
{
    int a,b,i,c=1;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        printf("%d",i);
        if(i%a!=0)
            printf(" ");
        if(i%a==0)
            printf("\n");
    }
    return 0;
}
