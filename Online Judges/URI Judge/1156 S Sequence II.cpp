#include<stdio.h>
int main()
{
    int i,j;
    double sum=0;
    for(i=1,j=1;i<=39;i+=2,j*=2)
    {
        sum=sum+(double)i/j;
    }
   printf("%.2lf\n",sum);
   return 0;
}
