#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0)
        n=n+1;
    for(i=1;i<=6;i=i+1)
    {
       printf("%d\n",n);
       n=n+2;
    }
}
