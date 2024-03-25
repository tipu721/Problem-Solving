#include<stdio.h>
int main()
{
    int X;
    float Y,CONSUMTION;
    scanf("%d%f",&X,&Y);
    CONSUMTION=X/Y;
    printf("%.3f km/l\n",CONSUMTION);
    return 0;
}
