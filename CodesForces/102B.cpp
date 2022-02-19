#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    long long num=0,sum=0,c=1;

    for(int i=0; i<s.size(); i++)
    {
        num+=(s[i]-48);
    }
    if(s.size()==1)
    {
        cout<<0<<endl;
       // main();
        return 0;
    }
    int dig;
    while(num>9)
    {
        while(num!=0)
        {
            dig=num%10;
            num=num/10;
            sum+=dig;

        }

        c++;
        num=sum;
        sum=0;
    }
    cout<<c<<endl;
   // main();
}


