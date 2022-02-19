#include<stdio.h>
#include<math.h>
int main()
{
    double i,a,b,ans;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        int c=0;
        if(a==0&&b==0)
            break;
        for(i=a; i<=b; i++)
        {
            ans=sqrt(i);
            if(ans/(int)ans==1.0)
                c++;
        }
        printf("%lf\n",c);
    }
}
