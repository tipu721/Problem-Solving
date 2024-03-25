#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,d;
        cin>>n>>d;
        int p=n/2;
        double q=ceil(d/(p+1));
        p=p+q;
        if(p<=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
