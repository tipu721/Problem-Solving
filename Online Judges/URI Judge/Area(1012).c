#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRAD,RETANGULO;
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO=(A*C)*1.0/2;
    CIRCULO=pi*C*C;
    TRAPEZIO=((A+B)*C)*1.0/2;
    QUADRAD=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRAD: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRAD,RETANGULO);
    return 0;
}
