#include<stdio.h>
int main()
{
    int i,n,x,rat=0,rabbit=0,frog=0,sum=0;
    char cha;
    float p_rat,p_rabbit,p_frog;
    scanf("%d",&n);
    if(n>=1&&n<=15);
    for(i=1; i<=n; i++)
    {
        scanf("%d
        %c",&x,&cha);
        sum=sum+x;
        if(cha=='R')
            rat=rat+x;
        if(cha=='S')
            frog=frog+x;
        if(cha=='C')
            rabbit=rabbit+x;
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    p_rat=(rat*100.00)/sum;
    p_rabbit=(rabbit*100.00)/sum;
    p_frog=(frog*100.00)/sum;
    printf("Percentual de coelhos: %.2f %%\n",p_rabbit);
    printf("Percentual de ratos: %.2f %%\n",p_rat);
    printf("Percentual de sapos: %.2f %%\n",p_frog);
    return 0;
}
