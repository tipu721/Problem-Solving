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
        int n,ar[1005];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int ans=0,a,b,c;
        for(int i=1; i<n-1; i++)
        {
            b=i;
            for(int j=i+1; j<n; j++)
            {
                if(ar[j]<ar[i])
                {
                    ans++;
                    c=j;
                    break;
                }
            }
            for(int j=i-1; j>=0; j--)
            {
                if(ar[j]<ar[i])
                {
                    ans++;
                    a=j;
                    break;
                }
            }
            if(ans==2)
                break;
            ans=0;

        }
        if(ans==2)
        {
            cout<<"YES"<<endl;
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}
