#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ar[105]= {0},ans1=-1,ans2=-1,mx=-1,a;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;

            ar[a]++;
            mx=max(a,mx);

        }

        for(int i=0; i<=mx; i++)
        {

            if(ar[i]==0)
            {
                ans1=i;
                break;
            }

        }

        for(int i=0; i<=mx; i++)
        {
            if(ar[i]==1)
            {
                ans2=i;
                break;
            }

        }
        //cout<<ans1<<endl<<ans2<<endl;

        if(ans1!=-1&&ans2!=-1)
        {
            if(ans1<ans2)
                cout<<ans1*2<<endl;
            else
                cout<<ans1+ans2<<endl;
        }
        else if(ans1!=-1&&ans2==-1)
            cout<<ans1*2<<endl;
        else if(ans1==-1&&ans2!=-1)
            cout<<ans2+mx+1<<endl;
        else if(ans1==-1&&ans2==-1)
            cout<<(mx+1)*2<<endl;





    }
}
