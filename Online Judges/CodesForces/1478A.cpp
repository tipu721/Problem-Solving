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
        int n,car[105]= {0};
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            car[a]++;
        }
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            ans=max(ans,car[i]);
        }
        cout<<ans<<endl;
    }

}
