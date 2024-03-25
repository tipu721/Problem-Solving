#include<stdio.h>
int main()
{
    int i,j,counter=7;
    for(i=1;i<=9;i=i+2)
    {
        for(j=1;j<=3;j++,counter--)

        {
            printf("I=%d J=%d\n",i,counter);
        }
    counter=counter+5;
    }

    return 0;
}
