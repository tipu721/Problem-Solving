#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10005];
    while(gets(s))
    {
        if(s[0]=='0'&&strlen(s)==1)
            break;
        long long sum=0;
        for(int i=0;i<strlen(s);i=i+2)
            sum=sum+(s[i]-48);
        for(int i=1;i<strlen(s);i=i+2)
            sum=sum-(s[i]-48);
        if(sum%11==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);

    }
    return 0;
}
