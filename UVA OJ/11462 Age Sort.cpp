#include<bits/stdc++.h>
using namespace std;
int arr[2000000];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int j=0; j<n; j++)
        {
            printf("%d",arr[j]);
            if(j!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

