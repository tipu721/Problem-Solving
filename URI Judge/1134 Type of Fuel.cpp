#include<stdio.h>
int main()
{
    int a,Alcool=0,Gasolina=0,Diesel=0;

    while(1)
{
start:
    scanf("%d",&a);
        if(a==1)
            Alcool++;
        if(a==2)
            Gasolina++;
        if(a==3)
            Diesel++;
        if(a>4)
            goto start;
        if(a==4)
            break;
    }
    {
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",Alcool);
        printf("Gasolina: %d\n",Gasolina);
        printf("Diesel: %d\n",Diesel);

    }
    return 0;
}
