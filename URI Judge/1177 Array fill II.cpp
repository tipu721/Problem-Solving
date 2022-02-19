#include<stdio.h>
int main()
{
    int n[1000],a,j=0;
    scanf("%d",&a);
    for(int i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==a)
            j=0;
    }
    return 0;
}
