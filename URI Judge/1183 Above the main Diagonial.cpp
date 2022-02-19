#include<stdio.h>
int main()
{
    double arr[12][12],sum=0;
    int i,j,a=11;
    char ch;
    scanf("%c",&ch);
    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf",&arr[i][j]);
    for(i=1; i<12; i++)
    {
        for(j=a; j<12; j++)
        {
            sum=sum+arr[i][j];
        }
        a--;
    }
    if(ch=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/66.0);
    return 0;
}
