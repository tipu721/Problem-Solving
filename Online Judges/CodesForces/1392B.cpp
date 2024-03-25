#include<bits/stdc++.h>
int ar[200005],ar2[200005];
using namespace std;
int main()
{
    long long t,n,k;
         cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            ar2[i]=ar[i];
        }
        sort(ar,ar+n);

        for(int i=0; i<n; i++)
            ar2[i]=(ar[n-1]-ar2[i]);


        if(k%2)
        {
            for(int i=0; i<n; i++)
                cout<<ar2[i]<<" ";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                ar2[i]=(ar[n-1]-ar[0])-ar2[i];
                cout<<ar2[i]<<" ";
            }
        }
        cout<<endl;

    }
}
