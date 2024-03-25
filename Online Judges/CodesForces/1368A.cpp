#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,c=0;
        cin>>a>>b>>n;
        if(b>a)
            swap(a,b);
        long long ans=0;
        while(1)
        {
           b+=a;
           c++;
           ans=b;
           if(ans>n)
            break;
           a+=b;
           c++;
           ans=a;
           if(ans>n)
           break;

        }
        cout<<c<<endl;

    }
}
