#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
       double ans;
        ans=(m*n)/2.00;
        ans=ceil(ans);
        cout<<(int)ans<<endl;

    }

}
