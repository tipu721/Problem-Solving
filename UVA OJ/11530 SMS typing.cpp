#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    char s[105];
    int c,l;
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {

        c=0;
        gets(s);
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
                c++;
            else if(s[i]>='a'&&s[i]<='o')
            {
                if(s[i]%3==1)
                    c=c+1;
                if(s[i]%3==2)
                    c=c+2;
                if(s[i]%3==0)
                    c=c+3;
            }
            else if(s[i]>='p'&&s[i]<='v')
            {
                if(s[i]%4==0)
                    c++;
                if(s[i]%4==1)
                    c=c+2;
                if(s[i]%4==2)
                    c=c+3;
                if(s[i]%4==3)
                    c=c+4;
            }
            else if(s[i]>='w'&&s[i]<='z')
            {
                if(s[i]%4==0)
                    c=c+2;
                if(s[i]%4==1)
                    c=c+3;
                if(s[i]%4==2)
                    c=c+4;
                if(s[i]%4==3)
                    c=c+1;
            }

        }
        printf("Case #%d: %d\n",j,c);
    }
}
