#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ar[200]={0};
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            for(int i=0; i<s.size(); i++)
            {
                ar[s[i]]++;
            }
        }
        int f=1;
        for(int i='a'; i<='z'; i++)
        {
            if(ar[i]>0)
            {
                cout<<ar[i]<<endl;
                if(ar[i]%n!=0)
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

