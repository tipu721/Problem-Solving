#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        cin>>n;
        int c=1;
        while(c*2<=n)
        {   //cout<<two<<endl;
            sum=sum+(c*2);
             c=c*2;
            cout<<c<<endl;

        }
        sum++;
        long long ans=(n*(n+1))/2;
        //cout<<sum<<endl<<ans<<endl;
        ans-=sum;
        cout<<ans-sum<<endl;

    }
}
