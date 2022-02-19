#include<stdio.h>
int main()
{
    int balance=100;
    while(1)
    {
        if(balance<8)
            break;
        balance=balance-8;
    }
    printf("%d",balance);
}
