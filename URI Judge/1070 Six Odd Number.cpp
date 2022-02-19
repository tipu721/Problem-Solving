#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=6;i++)
    {
        n=n+2;
        if(n%2==0)
            printf("%d\n",n-1);
        if(n%2!=0)
            printf("%d\n",n-2);
    }
    return 0;
}
