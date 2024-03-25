#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z&&y>z)printf("%d%d%d",x,y,z);
    return 0;
}
