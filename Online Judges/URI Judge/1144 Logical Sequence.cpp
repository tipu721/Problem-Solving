#include<stdio.h>
int main()
{
    int i,j,a,b=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d %d %d\n",b,b*b,b*b*b);
        printf("%d %d %d\n",b,b*b+1,b*b*b+1);
        b++;
    }
    return 0;
}
