#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        if(n%2!=0)
        {
            int f=0;
            for(int i=0;i<n;i+=2)
            {
                if((s[i]-'0')%2!=0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else
        {
            int f=0;
            for(int i=1;i<n;i+=2 )
            {
                if((s[i]-'0')%2==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }


    }

}
