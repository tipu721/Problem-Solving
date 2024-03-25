#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,Media,Media2;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    Media=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1f\n",Media);
    if(Media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(Media>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        Media2=(Media+n5)/2;
        if(Media2>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(Media2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",Media2);
    }

    return 0;
}
