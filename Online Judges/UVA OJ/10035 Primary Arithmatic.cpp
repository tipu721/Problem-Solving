#include<stdio.h>
int main()
{

    unsigned long long n1,n2;
    while(scanf("%llu %llu",&n1,&n2)!=EOF)
    {
        if(n1==0&&n2==0)
            break;

        int carry=0,cunt=0;
        while(n1||n2)
        {
            int a=n1%10;
            int b=n2%10;
            if(a+b+carry>9)
            {
                cunt++;
                carry=1;
            }
            else
                carry=0;
            n1=n1/10;
            n2=n2/10;

        }
        if(cunt==0)
            printf("No carry operation.\n");
        else if(cunt==1)
            printf("%d carry operation.\n",cunt);
        else
            printf("%d carry operations.\n",cunt);
    }
    return 0;
}
