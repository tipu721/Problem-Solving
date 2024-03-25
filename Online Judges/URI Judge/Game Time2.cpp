#include<stdio.h>
int main()
{
    int m1,m2,h1,h2;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h2>h1&&m2>m1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
    else if(h2>h1&&m2<m1)
    {
        --h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,(60+m2-m1));
    }
    else if(h2<h1&&m2>m1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2+24-h1,(m2-m1));
    else if(h2<h1&&m2<m1)
    {
        --h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2+24-h1,(m2+60-m1));
    }
    else printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    return 0;
}
