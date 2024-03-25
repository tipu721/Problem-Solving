#include<stdio.h>
int main()
{
      int a=5,b=6,c,d,e;
    c=++a+b;
    d=c-b++;
    e=c--+d+--a;
    printf("%d %d %d %d %d",a,b,c,d,e);



    return 0;
}

