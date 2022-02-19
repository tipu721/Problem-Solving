#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c,maxab,max;
    scanf("%d %d %d",&a,&b,&c);
    maxab=((a+b+abs(a-b))/2);
    max=((maxab+c)+abs(maxab-c));
    printf("%d eh o maior",max);
    return 0;
}
