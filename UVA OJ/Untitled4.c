#include<stdio.h>
int main()
{
    int r=0,a,n;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
         printf("%d ",a);
         n=n/10;
    }

    return 0;
}
