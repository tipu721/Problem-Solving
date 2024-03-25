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
        int n,c0=0,c1=0,c2=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a%3==0)
                c0++;
            else if(a%3==1)
                c1++;
            else
                c2++;

        }
        int target=n/3,ans=0;
        //cout<<c0<<" "<<c1<<" "<<c2<<endl;
        while(c2>target)
        {
            while(c0<target)
            {
                c2--;
                c0++;
                ans++;
                if(c2==target)
                    break;
            }
            if(c2==target)
                    break;
            while(c1<target)
            {
                c2--;
                c1++;
                ans+=2;
                if(c2==target)
                    break;
            }
        }
        while(c0>target)
        {
            while(c1<target)
            {
                c0--;
                c1++;
                ans++;
                if(c0==target)
                    break;
            }
            if(c0==target)
                    break;
            while(c2<target)
            {
                c0--;
                c2++;
                ans+=2;
                if(c0==target)
                    break;
            }
        }
       // cout<<c0<<" "<<c1<<" "<<c2<<endl;
        while(c1>target)
        {
            while(c2<target)
            {
                c1--;
                c2++;
                ans++;
                if(c1==target)
                    break;
            }
            if(c1==target)
                    break;
            while(c0<target)
            {
                c1--;
                c0++;
                ans+=2;
                if(c1==target)
                    break;
            }
        }
        //cout<<c0<<" "<<c1<<" "<<c2<<endl;
        cout<<ans<<endl;
    }

}

