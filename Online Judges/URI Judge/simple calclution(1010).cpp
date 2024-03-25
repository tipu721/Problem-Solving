#include<stdio.h>
int main()
{
    int code1,code2,num1,num2;
    float prise1,prise2,paid_amaount;
    scanf("%d %d %f\n%d %d %f",&code1,&num1,&prise1,&code2,&num2,&prise2);
    paid_amaount=num1*prise1+num2*prise2;
    printf("VALOR A PAGAR: R$ %.2f\n",paid_amaount);
    return 0;
}
