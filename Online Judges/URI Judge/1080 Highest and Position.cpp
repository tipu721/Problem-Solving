#include<stdio.h>
int main()
{
    int i,n,max=0,position;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);
        if(max<n)
        {
            max=n;
            position=i;
        }
    }
    printf("%d\n%d\n",max,position);
    return 0;
}
