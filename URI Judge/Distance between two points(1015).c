#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,distance;
    scanf("%lf%lf\n%lf%lf",&x1,&y1,&x2,&y2);
    distance=scrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.3lf\n",distance);
    return 0;
}
