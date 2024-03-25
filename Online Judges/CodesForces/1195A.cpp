#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005]={0};
    int n,k,a;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        arr[a]++;
    }
    int mx=0,p;
    for(int i=1; i<=k; i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            p=i;
        }
    }

    cout<<mx<<endl<<p<<endl;
    if(p*mx*2<=n)
        cout<<p*mx*2;
    else
    {
        int ans=(p*mx*2)-((p*mx*2)-n);
        if(n%2!=0)
            ans--;
        cout<<ans<<endl;
    }

    main();

}
