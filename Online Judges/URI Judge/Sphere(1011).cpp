#include<stdio.h>
int main()
{
    double pi=3.14159,R,VOLUME;
    printf("Enter R:");
    scanf("%lf",&R);
    VOLUME=4.0/3*(pi*R*R*R);
    printf("VOLUME = %.3lf",VOLUME);
    return 0;
}
