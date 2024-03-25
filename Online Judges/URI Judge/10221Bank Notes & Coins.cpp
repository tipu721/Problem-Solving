#include<stdio.h>
int main()
{
    double x;
    int z;
    scanf("%lf",&x);
    z=x*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",z/10000);
    z=z%10000;
    printf("%d nota(s) de R$ 50.00\n",z/5000);
    z=z%5000;
    printf("%d nota(s) de R$ 20.00\n",z/2000);
    z=z%2000;
    printf("%d nota(s) de R$ 10.00\n",z/1000);
    z=z%1000;
    printf("%d nota(s) de R$ 5.00\n",z/500);
    z=z%500;
    printf("%d nota(s) de R$ 2.00\n",z/200);
    z=z%200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",z/100);
    z=z%100;
    printf("%d moeda(s) de R$ .50\n",z/50);
    z=z%50;
    printf("%d moeda(s) de R$ .25\n",z/25);
    z=z%25;
    printf("%d moeda(s) de R$ .10\n",z/10);
    z=z%10;
    printf("%d moeda(s) de R$ .05\n",z/5);
    z=z%5;
    printf("%d moeda(s) de R$ .01\n",z/1);
    return 0;
}
