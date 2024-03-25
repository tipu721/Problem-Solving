#include<stdio.h>
int main()
{
    int a=1,i;
    double s=0;
    for(i=1;i<=100;i++)
    {
        s=s+((double)a/i);
    }
    printf("%.2lf\n",s);
    return 0;
}
