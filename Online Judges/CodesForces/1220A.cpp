#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ln,z=0,e=0,r=0,o=0,n=0;
    string s;
    cin>>ln>>s;
    for(int i=0; i<ln; i++)
    {
        if(s[i]=='o')
            o++;
        else if(s[i]=='n')
            n++;
        else if(s[i]=='e')
            e++;
    }
    int q=0;
    if(o>0&&n>0&&e>0)
    {
        int mn=min(o,n);
        mn=min(e,mn);
        q=mn;
        while(mn--)
        {
            cout<<1<<" ";
        }
    }

    int k=(ln-(3*q))/4;
    while(k--)
    {
        cout<<0<<" ";
    }
    cout<<endl;
    //main();
}
