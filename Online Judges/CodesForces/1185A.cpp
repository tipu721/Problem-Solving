#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll d,arr[12];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];

    }
    cin>>d;
    sort(arr,arr+3);
    ll a=abs(arr[1]-arr[0]);

    ll b=abs(arr[1]-arr[2]);
    ll ans=0;
    if(a<d)
        ans=d-a;
    if(b<d)
        ans=ans+(d-b);
    cout<<ans<<endl;
    main();

}
