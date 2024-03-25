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
        int n,ar[53];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            int mx=max(ar[i],ar[i+1]);
            int mn=min(ar[i],ar[i+1]);
            if(mx>2*mn)
            {
                //cout<<mx<<" "<<mn<<endl;
                while(1)
                {
                    mn*=2;
                    ans++;
                    if(mn*2>=mx)
                        break;
                }
                //cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }

}

