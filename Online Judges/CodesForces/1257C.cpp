#include<bits/stdc++.h>
using namespace std;
int index[200005],arr[200005];
int main()
{
    //carr[1000000]={0},index[1000000]={0},arr[1000000]={0};
    int t;
    cin>>t;
    while(t--)
    {
        int carr[200005]={0};
        int n;
        cin>>n;
        if(n==1)
        {
            int a;
            cin>>a;
            cout<<-1<<endl;
            continue;
        }
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            carr[arr[i]]++;
        }
        int mx=0,d=0;
        for(int i=1; i<=n; i++)
        {
           // cout<<carr[i]<<endl;
            if(mx<carr[i])
            {
                mx=carr[i];
                d=i;
            }
        }
        int p=1;
       // cout<<"d mx "<<d<<" "<<mx<<endl;
        for(int i=1; i<=n; i++)
        {
            //cout<<arr[i]<<endl;
            if(arr[i]==d)
            {
                index[p]=i;
                p++;
            }

        }
        sort(carr,carr+n+1);
        if(carr[n]==carr[n-1])
        {
            cout<<-1<<endl;
        }
        //cout<<"sz p "<<p<<endl;
        else
        {
            int mn=1000000;
           // cout<<"sz p "<<p<<endl;
            for(int i=1; i<p-1; i++)
            {
               // cout<<index[i]<<endl;
                mn=min((index[i+1]-index[i]),mn);

            }
            cout<<++mn<<endl;
        }


    }
}
