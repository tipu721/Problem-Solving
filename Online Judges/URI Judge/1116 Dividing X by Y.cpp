#include<stdio.h>
int main()
{
    int i,a,x,y;
    float m;
scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d %d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
            m=(float)x/(float)y;
            printf("%.1f\n",m);
        }
    }
    return 0;
}
