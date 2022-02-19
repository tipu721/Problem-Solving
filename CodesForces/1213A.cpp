#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,arr[110],odd=0,even=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
   cout<<min(odd,even)<<endl;
   //main();

}
