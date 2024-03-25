#include<bits/stdc++.h>
using namespace std;
int ar[300005];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(ar[0]>ar[n-1])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
