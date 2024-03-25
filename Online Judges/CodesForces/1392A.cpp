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
            cin>>ar[i];
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]!=ar[i+1])
            {
                f=1;

                break;
            }

        }
        if(f==1)
            cout<<1<<endl;
        else
            cout<<n<<endl;
    }
}
