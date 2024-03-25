#include<bits/stdc++.h>
using namespace std;
int isluccy(int n)
{
    while(n!=0)
    {
        int a=n%10;
        if(a!=4&&a!=7)
            return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int n,i;
    cin>>n;
    for( i=1; i<=n; i++)
    {
        if(isluccy(i)==1)
        {
            if(n%i==0)
            {
                cout<<"YES\n";
                break;
            }
        }

    }
    if(i==n+1)
            cout<<"NO\n";

   // main();
}
