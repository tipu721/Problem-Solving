#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(n>=0&&n<=400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",n+n*15/100,n*15/100);
    }
    else if(n<=800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",n+n*12/100,n*12/100);
    }
    else if(n<=1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",n+n*10/100,n*10/100);
    }
    else if(n<=2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",n+n*7/100,n*7/100);
    }
    else
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",n+n*4/100,n*4/100);
    }
    return 0;
}
