#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    ll mn=n;
    mn-=((k1-1)*a1);
    mn-=((k2-1)*a2);
    if(mn<=0)
        cout<<0<<" ";
    else if(mn<=a1+a2)
        cout<<mn<<" ";
    else
        cout<<a1+a2<<" ";

    ll mx,c=0;
    if(k1<=k2)
    {
        while(a1--&&n>=k1)
        {
            n-=k1;
            c++;
        }
        //cout<<c<<endl;
        while(a2--&&n>=k2)
        {
            n-=k2;
            c++;
        }
      //  cout<<c<<endl;
    }
    else
    {
        while(a2--&&n>=k2)
        {
            n-=k2;
            c++;
        }
        while(a1--&&n>=k1)
        {
            n-=k1;
            c++;
        }
    }
    cout<<c<<endl;
    //main();


}
