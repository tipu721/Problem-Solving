#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,x,y,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>d;
        ll ans1,ans2,ans3,mn=100000000000,f=0;
        if((y-x)%d==0)
        {
            f=1;
            ans1=(y-x)/d;
            mn=min(mn,ans1);
        }
        if((y-1)%d==0)
        {
            f=1;
            ans2=((x-1)/d)+((y-1)/d);
            if((x-1)%d!=0)
                ans2+=1;
            mn=min(mn,ans2);
        }
        if((n-y)%d==0)
        {
            f=1;
            ans3=((n-y)/d)+((n-x)/d);
            if((n-x)%d!=0)
                ans3+=1;
            mn=min(mn,ans3);
        }
        if(f)
            cout<<mn<<endl;
        else
            cout<<-1<<endl;
    }
}
