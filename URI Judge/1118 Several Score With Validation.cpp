#include<stdio.h>
int main()
{
    int counter=0,a;
    double n,m=0;

    start:
    while(1)
    {

        scanf("%lf",&n);
        if(n>=0&&n<=10)
        {
            m+=n;
            counter++;
            if(counter==2)
            {
                printf("media = %.2lf\n",m/2.0);
                counter=0,m=0;
                break;
            }

        }
        else
            printf("nota invalida\n");

    }
    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==1)
        {
            goto start;
        }
        else if(a==2)
        {
            break;
        }
    }
    return 0;
}
