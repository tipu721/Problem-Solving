#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                f++;
        }
        if(n-f==1)
            cout<<"BOB"<<endl;
        else if(n-f==0)
            cout<<"DRAW"<<endl;
        else if(n%2)
        {
            int temp=n/2;
            if(s[temp]=='1')
                cout<<"BOB"<<endl;
            else
                cout<<"ALICE"<<endl;
        }
        else
            cout<<"BOB"<<endl;
    }

}
