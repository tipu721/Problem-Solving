#include<stdio.h>
int main()
{
    int i,counter=0;
    float num;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&num);
        if(num>0)counter++;
        printf("%d valores positivos\n",counter);
    }
    return 0;
}
