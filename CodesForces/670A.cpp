#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn,mx,d,r;
    cin>>n;
    d=n/7;
    r=n%7;
    mn=d*2;
    mx=mn;
    if(r<=2)
        mx+=r;
    else if(r<=5)
        mx+=2;
    else if(r==6)
        {
            mn++;
            mx+=2;
        }
    cout<<mn<<" "<<mx<<endl;
   // main();


}
