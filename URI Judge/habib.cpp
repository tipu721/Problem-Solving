#include<stdio.h>
int main()
{
    int a=8,b=5,x,y,z,c=3;
    x=++a-b++-c+++a;
    y=++x-a+++b---c;
    z=a++ - --c;
    printf("x=%d,y=%d,z=%d,c=%d",x,y,z,c);
    return 0;
}
