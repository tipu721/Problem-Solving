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
        int n,ar[105];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(ar[0]<ar[i])
            {

                f=i;
                break;
            }
        }
        if(f)
            cout<<n-f<<endl;
        else
            cout<<0<<endl;
    }

}

