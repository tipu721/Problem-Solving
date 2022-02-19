#include<stdio.h>
int main()
{
    int i,a,b,sum=0,counter=0;
    scanf("%d %d",&a,&b);
    while(b<=a)
        scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        counter++;
        if(sum>b)
            break;
    }
    printf("%d\n",counter);
    return 0;
}
