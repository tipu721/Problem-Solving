#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        int ans=40*3;
        if(a==0&&b==0&&c==0&&d==0)
            break;
        if(b<=a)
            ans+=(a-b);
        else
            ans+=(a+40-b);
        if(b<=c)
            ans+=(c-b);
        else
            ans+=(c+40-b);
        if(d<=c)
            ans+=(c-d);
        else
            ans+=(c+40-d);
        cout<<ans*9<<endl;
    }
}

