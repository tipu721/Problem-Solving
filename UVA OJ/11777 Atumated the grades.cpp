#include<stdio.h>
int main()
{
    int t,t1,t2,f,at,ct1,ct2,ct3,marks,temp;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);
        if(ct1<ct2)
        {
            temp=ct1;
            ct1=ct2;
            ct2=temp;
        }
        if(ct1<ct3)
        {
            temp=ct1;
            ct1=ct3;
            ct3=temp;
        }
        if(ct2<ct3)
        {
            temp=ct2;
            ct2=ct3;
            ct3=temp;
        }
        marks=t1+t2+f+at+(ct1+ct2)/2;
        if(marks>89)
            printf("Case %d: A\n",i);
        else if(marks>79)
            printf("Case %d: B\n",i);
        else if(marks>69)
            printf("Case %d: C\n",i);
        else if(marks>59)
            printf("Case %d: D\n",i);
        else
            printf("Case %d: F\n",i);
    }
    return 0;
}
