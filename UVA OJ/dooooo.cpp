#include<stdio.h>
int main()
{
    int sum = 0;
    int number;
    scanf("%d",&number);
    while(number!=0)
    {
        sum+=number;
        scanf("%d",&number);

    }


    return 0;
}
