#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    //ll h=1;

    while(t--)
    {
        ll ar[105];
        ll n;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        ll h=1;
        int f=0;
        for(int i=1; i<n; i++)
        {
            if(ar[i]==1&&ar[i-1]==1)
            {
                h+=5;
            }
            else if(ar[i]==1)
                h+=1;
            else if(ar[i]==0 && ar[i-1]==0)
            {
                f=1;
                break;
            }
        }
        if(ar[0]==1)
            h++;
        if(f)
        cout<<-1<<endl;
        else
            cout<<h<<endl;
    }

}

