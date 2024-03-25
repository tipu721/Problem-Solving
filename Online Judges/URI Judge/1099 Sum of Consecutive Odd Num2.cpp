#include<stdio.h>
int main()
{
    int i,x,a,b,j,counter=0,sum=0;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(a%2==0)
            a++;
        else if(a%2!=0)
            a+=2;
        for(j=a; j<b; j+=2)
        {
            sum=sum+j;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
