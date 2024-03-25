#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,arr[100005],c1=0,c2=0,mn,mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            if(i==0||arr[i]==arr[i-1])
                c1++;
            else
                c1=1;

        }
        if(arr[i]==2)
        {
            if(i==0||arr[i]==arr[i-1])
                c2++;
            else
                c2=1;

        }
        mn=min(c1,c2);
        mx=max(mn,mx);

    }
    cout<<mx*2<<endl;
   // main();

}
