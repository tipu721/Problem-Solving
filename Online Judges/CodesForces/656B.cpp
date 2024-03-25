#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        ll ar[n+2];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(i+1==ar[i])
            {
                cout<<i+1<<" "<<i+2<<endl;
                f=1;
                break;
            }

        }
        if(f==0)
            cout<<1<<" "<<1<<endl;
    }
    return 0;
}
