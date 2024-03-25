#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,arr[34],p[34];
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        sort(arr+1,arr+n+1);
        int q=0;
        while(1)
        {
            if(p[q]>=arr[n])
                break;
            p[q]=pow(k,i);
            q++;

        }
        int f=0;
        for(int i=n; i>=1; i--)
        {
            if(p[q]>arr[i])
                q--;
            else
                ar

        }

    }
}
