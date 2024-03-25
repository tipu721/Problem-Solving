#include<stdio.h>
int main()
{
    int i,a,j,b=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=b;j<=b+2;j++)
        {
            printf("%d ",j);

        }
        printf("PUM\n");
        b=j+1;
    }
    return 0;
}
