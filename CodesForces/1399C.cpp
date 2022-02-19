#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[55];
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        int mx=0;
        for(int i=2; i<=100; i++)
        {
            int l=0,r=n-1;
            int c=0;
            while(l<r)
            {
                if(ar[l]+ar[r]>i)
                    r--;
                else if(ar[l]+ar[r]<i)
                    l++;
                else
                {
                    c++;
                    r--;
                    l++;
                }

            }
            mx=max(mx,c);
        }
        cout<<mx<<endl;

    }
}
