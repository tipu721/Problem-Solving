#include<stdio.h>
int main()
{
    int n,a[15],b[15],p1=0,p2=0,j,i,k,l,c=0,o;

    for(i=0; i<15; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            a[p1]=n;
            p1++;
            if(p1==5)
            {
                for(j=0; j<p1; j++)
              printf("par[%d] = %d\n",j,a[j]);
                c++;
                p1=0;
            }

        }
        if(n%2!=0)
        {
            b[p2]=n;
            p2++;
            if(p2==5)
            {
                for(k=0; k<p2; k++)
                printf("impar[%d] = %d\n",k,b[k]);
                p2=0;
            }

        }
    }
    for(o=0;o<p2;o++)
        printf("impar[%d] = %d\n",o,b[o]);
        for(o=0;o<p1;o++)
        printf("par[%d] = %d\n",o,a[o]);
    return 0;
}
