#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            break;
        int arr[100],p=0,c=0;
        while(a!=0)
        {
            if(a%2==1)
                c++;
            arr[p]=a%2;
            p++;
            a=a/2;
        }
        printf("The parity of ");
        for(int i=p-1;i>=0;i--)
        {
            printf("%d",arr[i]);
        }
        printf(" is %d (mod 2).\n",c);
    }
    return 0;

}
