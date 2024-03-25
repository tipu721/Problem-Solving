#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1[27],ch2[27];
    while(gets(ch1)&&gets(ch2))
    {
        long long sum1=0,sum2=0;
        for(int i=0;i<strlen(ch1);i++)
        {
            if(ch1[i]>='a'&&ch1[i]<='z')
                sum1=sum1+ch1[i]-96;
            else if(ch1[i]>='A'&&ch1[i]<='Z')
                sum1=sum1+ch1[i]-64;
        }
        for(int j=0;j<strlen(ch2);j++)
        {
            if(ch2[j]>='a'&&ch2[j]<='z')
                sum2=sum2+ch2[j]-96;
            else if(ch2[j]>='A'&&ch2[j]<='Z')
                sum2=sum2+ch2[j]-64;
        }
        long long sum3=0,sum4=0;
        top1:
        while(sum1!=0)
        {
            int a=sum1%10;
            sum3+=a;
            sum1/=10;
        }
        if(sum3>9)
        {
            sum1=sum3;
            sum3=0;
            goto top1;
        }
        top2:
        while(sum2!=0)
        {
            int a=sum2%10;
            sum4+=a;
            sum2/=10;
        }
        if(sum4>9)
        {
            sum2=sum4;
            sum4=0;
            goto top2;
        }
        float s;
        if(sum4>sum3)
            s=((float)sum3/(float)sum4)*100;
        else
        s=((float)sum4/(float)sum3)*100;
        printf("%0.2f %%\n",s);
    }
    return 0;
}
