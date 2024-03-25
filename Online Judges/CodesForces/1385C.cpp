#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        int c=0,i;
        for( i=n-2; i>=0; i--)
        {
            if(ar[i]>=ar[i+1])
                c++;
            else
                break;


        }
        for(i=i;i>=0;i--)
        {
            if(ar[i]<=ar[i+1])
                c++;
            else
                break;
        }
        cout<<n-c-1<<endl;
    }
}
