#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,ar[3];

        cin>>a>>b>>c;
        ll mn=1e8;

        mn=min(a,min(b,c));
        ll s1=(a-mn)+(b-mn)+(c-mn);
        if((s1+1)%7==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        s1+=(mn-1)*3;
        //cout<<s1<<endl;
        int f=0;
        while(1)
        {
            if(mn==0)
                break;
            if((s1+1)%7==0)
            {
                f=1;
                break;
            }
            s1-=3;
            mn--;


        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
