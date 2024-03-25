#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ar[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n*k;i++)
            cin>>ar[i];
        int d=n/2;
        ll s=0;
       // cout<<d<<endl;
        for(int i=(n*k)-1-d,j=1;j<=k;i-=(d+1),j++)
        {
            //cout<<ar[i]<<endl;
            s+=ar[i];
        }
        cout<<s<<endl;
    }

}

