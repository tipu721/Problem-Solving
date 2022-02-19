#include<stdio.h>
int main()
{
    int a,i;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        else
        {
            for(i=1; i<=a; i++)
            {
                {
                    printf("%d",i);
                    if(i!=a)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
}
