#include<stdio.h>
int main()
{
    int i,t,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        double l,w,d,wg;
        scanf("%lf %lf %lf %lf",&l,&w,&d,&wg);
        if((l<=56&&w<=45&&d<=25&&wg<=7.0)||(l+w+d)<=125&&wg<=7.0)
        {
            printf("1\n");
            c++;
        }
        else
            printf("0\n");
    }
    printf("%d\n",c);
    return 0;

}
