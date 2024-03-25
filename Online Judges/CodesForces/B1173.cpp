#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,c=0;
    cin>>n;
    int ans=(n/2)+1;
    cout<<ans<<endl;
    for(int i=1,j=1; j<=ans; j++)
    {
        cout<<i<<" "<<j<<endl;
        c++;
        if(c==n)
        {
            //main();
            return 0;
        }
    }
    for(int i=ans,j=2; j<=ans; j++)
    {
        cout<<i<<" "<<j<<endl;
        c++;
        if(c==n)
        {
            //main();
            return 0;
        }
    }
   // main();
}
