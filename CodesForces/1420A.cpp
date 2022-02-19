#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[50005];
        cin>>n;
        for(int i=0;i<n;i++ )
           cin>>ar[i];
        bool ans=false;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i+1]>=ar[i])
            {
                ans=true;
                break;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}

