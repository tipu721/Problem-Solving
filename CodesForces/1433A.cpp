#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,ans,rem;
        cin>>x;
        rem=x%10;
        ans=(rem-1)*10;
        int dig=0;
        while(x!=0)
        {
            x=x/10;
            dig++;
        }

        ans+=((dig*(dig+1))/2);
        cout<<ans<<endl;

    }
}
