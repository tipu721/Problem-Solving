#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char s[605];
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++)
    {
        int m=0,a=0,r=0,g=0,I=0,t=0;
        gets(s);
        for(int j=0; j<strlen(s); j++)
        {
            if(s[j]=='M')
                m++;
            else if(s[j]=='A')
                a++;
            else if(s[j]=='R')
                r++;
            else if(s[j]=='G')
                g++;
            else if(s[j]=='I')
                I++;
            else if(s[j]=='T')
                t++;
        }
        a/=3;
        r/=2;
        if(m==0||a==0||r==0||g==0||I==0||t==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int arr[6]= {m,a,r,g,I,t};
            int mn=arr[0];
            for(int i=0; i<6; i++)
            {
                if(arr[i]<mn)
                    mn=arr[i];
            }
            cout<<mn<<endl;
        }


    }
     return 0;
}
