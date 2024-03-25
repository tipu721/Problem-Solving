#include<stdio.h>
int main()
{
    int i;
    double a,m=0,counter=0;
    for(i=1; i>0; i++)
    {
        scanf("%lf",&a);
        if(a>10||a<0)
            printf("nota invalida\n");
        else
        {
            m+=a;
            counter++;
        }
        if(counter==2)
        {
            printf("media = %.2lf\n",(m)/2.0);
            break;
        }
    }
    return 0;
}
