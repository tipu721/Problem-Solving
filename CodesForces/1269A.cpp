#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=4,a;
    cin>>n;
    while(1)
    {
        a=n+b;
        int f1=0,f2=0;
        for(int i=2;i*i<=a; i++)
        {
            if(a%i==0)
                f1=1;
        }
        for(int i=2;i*i<=b; i++)
        {
            if(b%i==0)
                f2=1;
        }
        if(a>3&&f1==1&&f2==1)
        {
            cout<<a<<" "<<b<<endl;
            break;
        }
        else
            b++;
    }
   // main();
}
