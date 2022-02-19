#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[22];
    while(cin>>s)
    {
        int sum=0,f=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                sum+=(s[i]-38);
            else
                sum+=(s[i]-96);
        }
        for(int j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
           cout<<"It is a prime word.\n";
        else
            cout<<"It is not a prime word.\n";
    }
    return 0;
}
