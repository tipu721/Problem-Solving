#include<stdio.h>
#include<math.h>
int main()
{
    int arr[3000],arr2[300],n;
    while(scanf("%d",&n)!=EOF)
    {
        int c=0,p=0,f=0;
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(int i=0; i<n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])<n&&abs(arr[i]-arr[i+1])>0)
            {
                arr2[p]=abs(arr[i]-arr[i+1]);
                c++;
                p++;
            }
        }
        for(int j=0; j<p-1; j++)
        {
            for(int j2=j+1; j2<p; j2++)
            {
                if(arr2[j]==arr2[j2])
                {
                    f=1;
                    break;
                }
            }
        }
        if(c!=n-1||f==1)
            printf("Not Jolly\n");
        else
            printf("jolly\n");
    }
    return 0;

}
