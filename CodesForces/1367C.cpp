#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        int c=0,f=0,sum=0;
        if(s[0]=='0')
        {
            for(int i=0; i<n; i++)
            {

                if(s[i]=='1')
                {
                    f=1;
                    break;

                }
                c++;
                if(c==k+1)
                    break;
            }
            if(f==0)
            {
                s[0]='1';
                sum++;
            }
        }
        c=0,f=0;
        if(s[n-1]=='0')
        {
            for(int i=n-1; i>=0; i--)
            {

                if(s[i]=='1')
                {
                    f=1;
                    break;

                }
                c++;
                if(c==k+1)
                    break;


            }
            if(f==0)
            {
                s[n-1]='1';
                sum++;
            }


        }
        c=0,f=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            if(c==(2*k+1))
            {
                s[i-k]='1';
                c=k;
                sum++;
            }
            if(s[i]=='1')
                c=0;
//amar sonar banga


//amai toamry valovbaoifjioauhdf
        }
        cout<<sum<<endl;
    }
}
