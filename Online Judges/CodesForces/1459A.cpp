#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        string s1,s2;
        cin>>n;

        cin>>s1;
        cin>>s2;

        ll red=0,blue=0,r=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]>s2[i])
                r++;
            if(s2[i]>s1[i])
                b++;
        }
        if(b<r)
        {
            cout<<"RED"<<endl;
        }
        else if(r<b)
        {
            cout<<"BLUE"<<endl;

        }
        else
            cout<<"EQUAL"<<endl;

    }


}

