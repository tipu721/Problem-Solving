#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,R1,R2;
    scanf("%f%f%f%",&A,&B,&C);
    R1=-B+sqrt((B*B-4*A*C))/(2*A);
    R2=-B-sqrt((B*B-4*A*C))/(2*A);
    if(sqrt(B*B-4*A*C)<=0||sqrt(B*B-4*A*C=0)<=0||2*A=0){
        printf("not");
    }
    else printf("%.5f%.5%",R1,R1);
    return 0;
}
