#include<stdio.h>
int main()
{
    int p,h,o;
    while(scanf("%d %d %d",&p,&h,&o)!=EOF)
    {
        if(h-(o-p)>0)
            printf("Hunters win!\n");

        else
            printf("Props win!\n");
    }
    return 0;
}
