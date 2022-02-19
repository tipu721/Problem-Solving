#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mn=n/7;
    mn=mn*2;
    int mx=mn;
    if((n%7)>=2)
    {
         mx+=2;
    }
    else
        mx+=(n%7);
    cout<<mn<<" "<<mx<<endl;
    //main();


}
