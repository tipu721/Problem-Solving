#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ar[n+2],neg=0;
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            if(ar[i]<0)
                neg++;
        }
        for(int i=0; i<neg; i++)
        {
            if(ar[i]>0)
                ar[i]*=-1;
        }
        for(int i=neg; i<n; i++)
        {
            if(ar[i]<0)
                ar[i]*=-1;
        }
        bool ans=true;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i+1]<ar[i])
                ans=false;
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}

