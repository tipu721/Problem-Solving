#include<stdio.h>
int main()
{
    int a[3][3],b,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    a[1][1]=a[1][1]+1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
