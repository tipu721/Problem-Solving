#include<stdio.h>
int main()
{
    char a[4]="Dia",b=':';
    int d1,d2,h1,h2,m1,m2,s1,s2;
    scanf("%s%d",&a,&d1);
    scanf("%d%c%d%c%d",&h1,&b,&m1,&b,&s1);
    scanf("%s%d",&a,&d2);
    scanf("%d%c%d%c%d",&h2,&b,&m2,&b,&s2);
    if(h2>=h1&&m2>=m1&&s2>=s1)
    {
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2-h1,m2-m1,s2-s1);
    }
    else if(h2>=h1&&m2>=m1&&s2<s1)
    {
        --m2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2-h1,m2-m1,s2+60-s1);
    }
    else if(h2>=h1&&m2<m1&&s2>=s1)
    {
        --h2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2-h1,m2+60-m1,s2-s1);
    }
    else if(h2>=h1&&m2<m1&&s2<s1)
    {
        --m2;
        --h2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2-h1,m2+60-m1,s2+60-s1);
    }
    else if(h2<h1&&m2>=m1&&s2>=s1)
    {
        --d2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2+-d1,h2+24-h1,m2-m1,s2-s1);
    }
    else if(h2<h1&&m2>=m1&&s2<s1)
    {
        --m2;
        --d2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2+24-h1,m2-m1,s2+60-s1);
    }
    else if(h2<h1&&m2<m1&&s2>=s1)
    {
        --h2;
        --d2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2+24-h1,m2+60-m1,s2-s1);
    }
    else if(h2<h1&&m2<m1&&s2<s1)
    {
        --m2;
        --h2;
        --d2;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d2-d1,h2+24-h1,m2+60-m1,s2+60-s1);
    }
    return 0;
}
