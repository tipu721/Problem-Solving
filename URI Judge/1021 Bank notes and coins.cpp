#include<stdio.h>
int main()
{
    float n;
    int m;
    scanf("%f",&n);
    printf("NOTAS:\n");
    n/100;
    printf("%d nota(s) de R$ 100.00\n",n/100);
    m=(n%100)/50;
    printf("%d nota(s) de R$ 50.00\n",m);
    m=m%20;
    printf("%d nota(s) de R$ 20.00\n",m);



}
