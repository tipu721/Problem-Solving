#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b<=c||a+c<=b||b+c<=a)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
