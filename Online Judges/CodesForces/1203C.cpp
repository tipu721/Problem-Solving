#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        ll n,m,s=0;
        cin>>n>>m;
        ll div=n/m;
        if(div<=10)
        {
            for(int i=1;i<=div;i++)
            {
                s+=((m*i)%10);
            }
            cout<<s<<endl;
        }
        else
        {
           ll div10=div/10;
           ll rem=div%10;
           for(int i=1;i<=10;i++)
            {
                s+=((m*i)%10);
            }
           s*=div10;
           for( int i=1;i<=rem;i++)
           {
               s+=(m*i)%10;
           }
           cout<<s<<endl;
        }


    }
}
