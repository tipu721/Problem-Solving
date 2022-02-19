#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b<a)
            swap(a,b);

        ans=((b-a)/10);
        if((b-a)%10)
            ans++;
        cout<<ans<<endl;

    }
}
