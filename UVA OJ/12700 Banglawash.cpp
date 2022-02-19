#include<stdio.h>
#include<string.h>
int main()
{
    char s[11];
    int i,n,t,i2,n2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int b=0,w=0,a=0,t=0;
        scanf("%d",&n);
        scanf("%s",s);
        int l=strlen(s);
        for(i2=0; i2<l; i2++)
        {
            if(s[i2]=='B')
                b++;
            if(s[i2]=='W')
                w++;
            if(s[i2]=='A')
                n--;
            if(s[i2]=='T')
                t++;
        }
        if(b==n&&n!=0&&t==0)
            printf("Case %d: BANGLAWASH\n",i);
        else if(w==n&&n!=0&&t==0)
            printf("Case %d: WHITEWASH\n",i);
        else if(n==0)
            printf("Case %d: ABANDONED\n",i);
        else if(b==w&&n!=0)
            printf("Case %d: DRAW %d %d\n",i,b,t);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(w>b)
            printf("Case %d: WWW %d - %d\n",i,w,b);
    }
    return 0;
}
