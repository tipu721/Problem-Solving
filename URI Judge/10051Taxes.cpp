#include<stdio.h>
int main()
{
    float n,tax;
    scanf("%f",&n);
    if(n>4500.00)
    {
        tax=(n-4500.00)*28/100+1500*18/100+1000*8/100;
        printf("R$ %.2f\n",tax);
    }
    else if(n>3000.00)
    {
        tax=(n-3000)*18/100+1000*8/100;
        printf("R$ %.2f\n",tax);
    }
    else if(n>2000.00)
    {
        tax=(n-2000)*8/100;
        printf("R$ %.2f\n",tax);
    }
    else printf("Isento\n");
    return 0;
}
