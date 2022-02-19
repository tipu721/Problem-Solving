#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ar[102],p=0,c=0;
        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='1')
                c++;

            if ((c>0&&s[i]=='0')||(i==s.size()-1&&c>0))
            {
                ar[p]=c;
                p++;
                c=0;
            }
        }
        sort(ar,ar+p);

        int sum=0;
        for(int i=p-1; i>=0; i-=2)
        {
            //cout<<ar[i]<<endl;
            sum+=ar[i];
        }
        cout<<sum<<endl;

    }
}
