#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,p=0;
    char s1[105],s2[105];
    while(cin>>g)
    {
        if(g==0)
            break;
        cin>>s1;
        int r=strlen(s1)/g;
        for(int i=0;i<strlen(s1);i++)
        {
            s2[p]=s1[i];
            p++;
            if((i+1)%r==0)
            {
               for(int j=p-1;j>=0;j--)
                cout<<s2[j];
               p=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
