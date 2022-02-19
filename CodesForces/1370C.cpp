#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       bool a=false;
       if(n>1&&n%2!=0)
        a=true;
       if(n==2)
        a=true;
       for(int i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
               if(i!=(n/2)&&i%2==1)
                a=true;
               if((n/i)%2==1&&(n/i)!=(n/2))
                a=true;
           }
       }
       if(a)
        cout<<"Ashishgup"<<endl;
       else
        cout<<"FastestFinger"<<endl;
    }
}
