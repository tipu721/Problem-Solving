#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[302],br1[305];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];

        }
        int d=n/2;
        if(n%2==1)
            d++;
        for(int i=1,j=1;i<=d;i++,j+=2)
        {
            br1[j]=ar[i];
        }
        for(int i=n,j=2;i>=d-1;i--,j+=2)
        {
            br1[j]=ar[i];
        }
        for(int i=1;i<=n;i++)
            cout<<br1[i]<<" ";
        cout<<endl;
    }

}


