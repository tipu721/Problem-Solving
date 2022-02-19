#include<stdio.h>
int main()
{
    int n,sum=0,counter=0;
    for(;;)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        counter++;
        sum=sum+n;

    }
    printf("%.2lf\n",(double)sum/counter);
}
