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
        ll n;
        cin>>n;
        ll ar[n+7][7];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=5; j++)
            {
                cin>>ar[i][j];
            }
        }
        int i = 1, j = n;
        while(i < j)
        {
            int cnt=0;
            for(int k=1; k<=5; k++)
            {
                if(ar[i][k]<ar[j][k])
                    cnt++;
            }
            if(cnt<3)
                i++;
            else
                j--;
        }
        assert(i == j);
        int ans= i;
        for(int i=1; i<=n; i++)
        {
            if(i!=ans)
            {
                int cnt = 0;
                for( int j=1; j<=5; j++)
                {
                    if(ar[i][j]>ar[ans][j])
                        cnt++;
                }
                if(cnt<3)
                {
                    ans = -1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

}

