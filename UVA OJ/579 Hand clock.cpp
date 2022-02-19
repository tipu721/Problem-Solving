#include<stdio.h>
#include<math.h>
int main()
{
    double h,m,ans;
    while(scanf("%lf:%lf",&h,&m)!=EOF)
    {
        if(h==0&&m==0)
            break;
        h=h*30+.5*m;
        m=m*6;
        ans=fabs(h-m);
        if (ans>180)
            ans = 360-ans;
            printf("%.3lf\n",ans);
    }
    return 0;
}
