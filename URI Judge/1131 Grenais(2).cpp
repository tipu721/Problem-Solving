#include<stdio.h>
int main()
{
    int a,b,c,grenais=0,Inter=0,Gremio=0,Empates=0;
start:
        scanf("%d %d",&a,&b);
        grenais++;
        if(a>b)
            Inter++;
        else if (b>a)
            Gremio++;
        else
            Empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&c);
        if(c==1)
            goto start;
        if(c==2)
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",Inter);
    printf("Gremio:%d\n",Gremio);
    printf("Empates:%d\n",Empates);
    if(Inter>Gremio)
        printf("Inter venceu mais\n");
    else if(Inter<Gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    return 0;
}

