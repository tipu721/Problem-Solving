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
        ll l,r,m;
        cin>>l>>r>>m;
        ll a,b,c;
        a=l;
        ll p=1;
        for(int i=0;; i++)
        {
            if(a*i>m)
            {
               b=l+abs(m-p);
               c=l;
               if(i==1)
                swap(b,c);
               break;
            }
            p=a*i;


        }

        cout<<a<<" "<<b<<" "<<c<<endl;
    }

}

