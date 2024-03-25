#include<stdio.h>
int main()
{
    int arr[51],n,c=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int sum=0,mv=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        sum=sum/n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sum)
            mv=mv+(arr[i]-sum);
        }
        printf("Set #%d\n",c);
        printf("The minimum number of moves is %d.\n\n",mv);
        c++;
    }
    return 0;

}
