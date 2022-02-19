#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=(int)sqrt(n);
        ans+=ceil((n-ans)/ans);
        cout<<(int)(ans-1)<<endl;
    }
}
