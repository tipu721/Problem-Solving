#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        ll n,m,ar1[52],ar2[52];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar1[i];
        cin>>m;
        for(int i=0; i<m; i++)
            cin>>ar2[i];
        sort(ar1,ar1+n);
        sort(ar2,ar2+m);
        int ans=2,f=0;
        for(int i=n-1,j=m-1; i>=0; i--,j--)
        {
            if(ar2[j]<=ar1[i] || j<0)
            {
                ans = 1;
                f=1;
                break;
            }
        }
        if(ans==1)
            cout<<"Alice"<<endl;
        if(f==0)
        {
            for(int i=n-1,j=m-1; i>=1; i--,j--)
            {
                if(ar2[j]>=ar1[i-1] || i-1<0)
                {
                    ans = 2;
                    break;
                }
            }
            if(ans==2)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }

        for(int i=n-1,j=m-1; i>=0; i--,j--)
        {
            if(ar2[i]>=ar1[j] || j<0)
            {
                ans = 2;
                f=1;
                break;
            }
        }
        if(ans==1)
            cout<<"Alice"<<endl;
        if(f==0)
        {
            for(int i=n-1,j=m-1; i>=1; i--,j--)
            {
                if(ar2[i-i]<ar1[j] || i-1<0)
                {
                    ans = 2;
                    break;
                }
            }
            if(ans==2)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }

    }


}

