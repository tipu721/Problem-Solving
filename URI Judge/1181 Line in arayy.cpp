#include<stdio.h>
int main()
{
    float arr[12][12],sum=0;
    int a,i,j;
    char ch;
    scanf("%d",&a);
    getchar();
    scanf("%c",&ch);
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%f",&arr[i][j]);
            if(i==a)
                sum=sum+arr[i][j];
        }
    }
    if(ch=='S')
        printf("%.1f",sum);
    else
        printf("%.1f",sum/3.0);
    return 0;
}
