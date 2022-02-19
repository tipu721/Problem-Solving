#include<stdio.h>
int main()
{
    int a[1000],n,i,p=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int min=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,p);
    return 0;
}
