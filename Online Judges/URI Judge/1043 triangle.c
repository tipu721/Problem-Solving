#include<stdio.h>
int main()
{
    float a,b,c,Perimetro,Area;
    scanf("%f%f%f",&a,&b,&c);
    Perimetro=a+b+c;
    Area=.5*(a+b)*c;
    if(a+b>c&&b+c>a&&c+a>b)
    {

        printf("Perimetro = %.1f\n",Perimetro);
    }
    else
        printf("Area = %.1f\n",Area);
    return 0;
}
