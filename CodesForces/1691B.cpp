#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll ar[n+3],mx=0,ans=1;
        set<ll>st;
        for(int i=1; i<=n; i++)
        {

            cin>>ar[i];
            if(ar[i]>i)
                ans=0;
            mx=max(mx,a);
            st.insert(a);

        }

        else
            cout<<-1<<endl;


    }
}

