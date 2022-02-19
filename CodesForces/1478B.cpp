#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int q,d;
        cin>>q>>d;
        while(q--)
        {
            ll a,n,f=0;
            cin>>a;
            while(a>=d)
            {
                n=a;
                while(n!=0)
                {
                    if(n%10==d)
                    {
                        f=1;
                        break;
                    }
                    n=n/10;
                }
                if(f==1)
                    break;
                a-=d;

            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}


