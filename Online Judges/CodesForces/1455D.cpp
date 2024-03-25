#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        cin>>n>>temp;
        int ar[n+3],ans=0;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int f1=-1,f2=0;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                f1=i;
                if(ar[i]<temp)
                    f2=1;

            }
        }
        if(f1==-1)
        {
            cout<<0<<endl;
            continue;
        }
        if(f2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int res=0;
        for(int i=0; i<f1+1; i++)
        {
            if(ar[i]>temp)
            {
                swap(temp,ar[i]);
                res++;
            }
        }
       // cout<<res<<endl;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                res=-1;
                break;
            }
        }
        cout<<res<<endl;

    }
}
