#include<stdio.h>
int main()
{
    int i,x,counter=0;
    scanf("%d",&x);
    for(i=x;i++)
    {
        if(i%2!=0)
        {

            printf("%d\n",i);
            counter++;
            if(counter==6)
                break;
        }
        return 0;
    }
}
