#include<stdio.h>
int main()
{
    int i,m,n,temp,j,sum=0;
    for(i=1;i>0;i++)
    {
        scanf("%d %d",&m,&n);
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        if(m==0||n==0||n<0||m<0)
            break;
        for(j=m;j<=n;j++)
        {
            printf("%d ",j);
            sum=sum+j;

        }
        printf("Sum=%d\n",sum);
        sum=0;
    }

    return 0;
}
