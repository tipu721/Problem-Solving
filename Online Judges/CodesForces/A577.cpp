#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c=0;
    cin>>a>>b;
    for(int i=1; i*i<=b; i++)
    {
        if(b%i==0&&i==(b/i)&&i<=a)
            c++;
        else if(b%i==0&&i<=a&&(b/i<=a))
        {
           c+=2;

        }


    }
    cout<<c;
  //  main();
}
