#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long x,s=0,c=0;
        cin>>x;

        while(s<x)
        {

            c++;
            s+=c;


        }
        if(s-x==1)
            cout<<c+1<<endl;
        else
            cout<<c<<endl;
    }
}
