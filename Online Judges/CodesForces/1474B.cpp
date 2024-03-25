#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll d,a,b,c,ans;
        cin>>d;
        a=1;
        b=a+d;
        for(int i=b;;i++)
        {
            int f=0;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                    f=1;
            }
            if(f==0)
            {
                b=i;
                break;
            }
        }
        c=b+d;
        for(int i=c;;i++)
        {
            int f=0;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                    f=1;
            }
            if(f==0)
            {
                c=i;
                break;
            }
        }
        cout<<b*c<<endl;


    }

}

