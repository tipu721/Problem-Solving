#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            printf("0");
        }
        if(n<0)
            break;
        int arr[100000],a,p=0;
        while(n!=0)
        {
            a=n%3;
            arr[p]=a;
            p++;
            n/=3;

        }
        for(int i=p-1;i>=0;i--)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
