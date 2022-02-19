#include<stdio.h>
int main()
{
    float i,j;
    for(i=0; i<=2.10; i+=.2)
    {
        for(j=1; j<=3; j++)
        {
            if(i==0||i==1.00||i>2)
            printf("I=%d J=%d\n",(int)i,(int)(i+j));
            else
            printf("I=%.1f J=%.1f\n",i,i+j);
        }

    }
    return 0;
}
