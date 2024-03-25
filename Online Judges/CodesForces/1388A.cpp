#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<8<<endl;
        else if(n==2)
            cout<<98<<endl;
        else if(n==3)
            cout<<998<<endl;
        else
        {
            for(int i=1;i<=(n-(n/4));i++)
            cout<<9;
            for(int i=1;i<=(n/4);i++)
            cout<<8;
            cout<<endl;
        }


    }
}

