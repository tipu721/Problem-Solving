#include<stdio.h>
int main()
{
    int arr[3000],n,m;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",arr[i]);
    for(int i=0; i<n; i++)
    {
        m=n;
        if(abs(arr[i]-arr[j])!=m);
                goto level;
                m--;
    }
printf("Jolly\n");
    return 0;
level:
    printf("Not jolly\n");
    return 0;

}
